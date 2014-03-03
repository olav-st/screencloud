#ifndef _PYTHONQTMISC_H
#define _PYTHONQTMISC_H

/*
 *
 *  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtMisc.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------


#include <QList>

#define PythonQtValueStorage_ADD_VALUE(store, type, value, ptr) \
{  type* item = (type*)store.nextValuePtr(); \
   *item = value; \
   ptr = (void*)item; \
}

#define PythonQtValueStorage_ADD_VALUE_IF_NEEDED(alreadyAllocatedPtr,store, type, value, ptr) \
{ \
  type* item = (type*)(alreadyAllocatedPtr?alreadyAllocatedPtr:store.nextValuePtr()); \
  *item = value; \
  ptr = (void*)item; \
}

//! stores a position in the PythonQtValueStorage
class PythonQtValueStoragePosition {

public:
  PythonQtValueStoragePosition() { chunkIdx = 0; chunkOffset = 0; }

  int chunkIdx;
  int chunkOffset;

};

//! a helper class that stores basic C++ value types in chunks
template <typename T, int chunkEntries> class PythonQtValueStorage
{
public:
  PythonQtValueStorage() {
    _chunkIdx  = 0;
    _chunkOffset = 0;
    _currentChunk = new T[chunkEntries];
    _chunks.append(_currentChunk);
  };

  //! clear all memory
  void clear() {
    T* chunk;
    foreach(chunk, _chunks) {
      delete[]chunk;
    }
    _chunks.clear();
  }

  //! get the current position to be restored with setPos
  void getPos(PythonQtValueStoragePosition & pos) {
    pos.chunkIdx = _chunkIdx;
    pos.chunkOffset = _chunkOffset;
  }

  //! set the current position (without freeing memory, thus caching old entries for reuse)
  void setPos(const PythonQtValueStoragePosition& pos) {
    _chunkOffset = pos.chunkOffset;
    if (_chunkIdx != pos.chunkIdx) {
      _chunkIdx = pos.chunkIdx;
      _currentChunk = _chunks.at(_chunkIdx);
    }
  }

  //! add one default constructed value and return the pointer to it
  T* nextValuePtr() {
    if (_chunkOffset>=chunkEntries) {
      _chunkIdx++;
      if (_chunkIdx >= _chunks.size()) {
        T* newChunk = new T[chunkEntries];
        _chunks.append(newChunk);
        _currentChunk = newChunk;
      } else {
        _currentChunk = _chunks.at(_chunkIdx);
      }
      _chunkOffset = 0;
    }
    T* newEntry = _currentChunk + _chunkOffset;
    _chunkOffset++;
    return newEntry;
  };

protected:
  QList<T*> _chunks;

  int _chunkIdx;
  int _chunkOffset;
  T*  _currentChunk;

};

//! a helper class that stores basic C++ value types in chunks and clears the unused values on setPos() usage.
template <typename T, int chunkEntries> class PythonQtValueStorageWithCleanup : public PythonQtValueStorage<T, chunkEntries>
{  
public:
  void setPos(const PythonQtValueStoragePosition& pos) {
    if (_chunkIdx > pos.chunkIdx) {
      T*  firstChunk = _chunks.at(pos.chunkIdx);
      // clear region in first chunk
      for (int i = pos.chunkOffset; i < chunkEntries; i++) {
        firstChunk[i] = T();
      }
      for (int chunk = pos.chunkIdx + 1; chunk < _chunkIdx; chunk++) {
        // clear the full chunks between the first and last chunk
        T*  fullChunk = _chunks.at(chunk);
        for (int i = 0; i < chunkEntries; i++) {
          fullChunk[i] = T();
        }
      }
      // clear region in last chunk
      T*  lastChunk = _chunks.at(_chunkIdx);
      for (int i = 0; i < _chunkOffset; i++) {
        lastChunk[i] = T();
      }
    } else if (_chunkIdx == pos.chunkIdx) {
      // clear the region in the last chunk only
      T*  lastChunk = _chunks.at(_chunkIdx);
      for (int i = pos.chunkOffset; i<_chunkOffset; i++) {
        lastChunk[i] = T();
      }
    }

    PythonQtValueStorage<T, chunkEntries>::setPos(pos);
  }

private:
  using PythonQtValueStorage<T, chunkEntries>::_chunks;
  using PythonQtValueStorage<T, chunkEntries>::_chunkIdx;
  using PythonQtValueStorage<T, chunkEntries>::_chunkOffset;
  using PythonQtValueStorage<T, chunkEntries>::_currentChunk;
};

#endif
