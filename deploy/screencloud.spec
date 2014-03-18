#
# spec file for package screencloud
#

Name:           screencloud
License:        GPL-2.0
Group:          Productivity/Networking/Other
Summary:        Easy to use screenshot sharing application
Version:        1.1.3
Release:        2
BuildRoot:      %{_tmppath}/%{name}-%{version}-build
Source:         %{name}-%{version}.tar.gz	
Url:            http://screencloud.net

BuildRequires: gcc-c++ cmake

%if 0%{?suse_version}
BuildRequires: update-desktop-files
BuildRequires: libqt4-devel libqxt-devel quazip-devel python-devel
Requires: libqt4 libqxt1 libquazip1 python
%else
BuildRequires: libqt4-devel libqxt-devel quazip-devel python-devel
Requires: qt libqxt quazip python
%endif

%description
Easy to use screenshot tool.

Take a screenshot using one of the 3 hotkeys or simply click the
ScreenCloud tray icon. You can choose where you want to save your screenshot.

If you choose to upload your screenshot to the screencloud website, a
link will automatically be copied to your clipboard. You can share
this link with your friends or colleagues via email or in an IM
conversation. All they have to do is click the link and look at your screenshot.

ScreenCloud also offers FTP and SFTP uploading if you want to use
your own server.



Authors:
--------
    Olav S. Thoresen <olav.s.th@gmail.com>


%prep
%setup -q

 
%build
cmake ./ $(cat screencloud-apikeys.txt)
%{__make} %{?jobs:-j%jobs}
 
%install
%make_install

%clean
 
%files
%defattr(-,root,root,-)
%{_datadir}/doc/screencloud
%{_datadir}/doc/%{name}/copyright
%{_datadir}/doc/%{name}/changelog.gz

%dir /usr/share/icons/hicolor
%dir /usr/share/icons/hicolor/128x128
%dir /usr/share/icons/hicolor/128x128/apps
%dir /usr/share/icons/hicolor/16x16
%dir /usr/share/icons/hicolor/16x16/apps
%dir /usr/share/icons/hicolor/32x32
%dir /usr/share/icons/hicolor/32x32/apps
%dir /usr/share/icons/hicolor/64x64
%dir /usr/share/icons/hicolor/64x64/apps
%dir /usr/share/icons/hicolor/scalable
%dir /usr/share/icons/hicolor/scalable/apps
%{_datadir}/applications/%{name}.desktop
%{_datadir}/icons/hicolor/scalable/apps/%{name}.svg
%{_datadir}/icons/hicolor/16x16/apps/%{name}.png
%{_datadir}/icons/hicolor/32x32/apps/%{name}.png
%{_datadir}/icons/hicolor/64x64/apps/%{name}.png
%{_datadir}/icons/hicolor/128x128/apps/%{name}.png

/opt/%{name}
/opt/%{name}/%{name}
/opt/%{name}/%{name}.sh
/opt/%{name}/libPythonQt.so
/opt/%{name}/sfx
/opt/%{name}/sfx/notification.wav
/opt/%{name}/sfx/shutter.wav
/opt/%{name}/modules
/opt/%{name}/modules/ScreenCloud.py

 
%changelog
* Sat Mar 1 2014 Olav S Thoresen <olav.s.th@gmail.com> - 1.1.3
- New plugin format (python plugins)
- All URLs use https by default
- Removed various dependencies