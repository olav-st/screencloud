from PythonQt.QtCore import QSettings
from PythonQt.QtGui import QDesktopServices
import os, string
from md5 import md5
from random import randint
from collections import defaultdict
from time import strftime, localtime

def getScreenshotFormat():
	settings = QSettings()
	settings.beginGroup("main")
	format = settings.value("format", "png")
	settings.endGroup()
	return format

def formatFilename(nameFormat, includeFileExtension = True, custom_vars = dict()):
	try:
		name = strftime(nameFormat.encode('utf-8'), localtime()).decode('utf-8')
	except ValueError:
		name = nameFormat
		pass
	random_hash = md5(os.urandom(128)).hexdigest()
	random_num = str(randint(0,9))
	var_dict = defaultdict(str, rnd = random_num, rnd_h = random_hash)
	var_dict.update(custom_vars)
	try:
		name = string.Formatter().vformat(name, (), var_dict)
	except ValueError:
		pass
	extension = "." + getScreenshotFormat()
	if(includeFileExtension and extension not in name):
		name += extension
	return name
	
def getPluginDir():
	return QDesktopServices.storageLocation(QDesktopServices.DataLocation) + "/plugins"

def setUrl(url):
	global clipboardUrl
	clipboardUrl = url

def setError(err):
	global uploadingError
	uploadingError = err
