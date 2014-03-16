from PythonQt.QtCore import QSettings
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
            pass
	random_hash = md5(os.urandom(128)).hexdigest()
	random_num = str(randint(0,9))
	var_dict = defaultdict(str, rnd = random_num, rnd_h = random_hash)
	var_dict.update(custom_vars)
	try:
		name = string.Formatter().vformat(name, (), var_dict)
	except ValueError:
		pass
	extension = ".png"
	if(includeFileExtension and extension not in name):
		name += extension
	return name

def setUrl(url):
	global clipboardUrl
	clipboardUrl = url

def setError(err):
	global uploadingError
	uploadingError = err
