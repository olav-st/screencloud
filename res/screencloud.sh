#!/bin/bash
#Set PYTHONHOME if running as a snap
if [ -n "$SNAP" ]; then
	export PYTHONHOME=$SNAP/usr
	echo "Setting PYTHONHOME=$PYTHONHOME"
	if ! ls $PYTHONHOME/lib/python* 1> /dev/null 2>&1; then
		echo "Warning, there seems to be no python directories under PYTHONHOME/lib"
	fi
	export PYTHONPATH=$SNAP/share/screencloud/modules
	echo "Setting PYTHONPATH=$PYTHONPATH"
fi
#Try to figure out the users icon theme
ICON_THEME=$(gsettings get org.gnome.desktop.interface icon-theme)
if [ -z "$ICON_THEME" ]; then
	ICON_THEME=$(gconftool-2 -g /desktop/gnome/interface/icon_theme)
fi
#Check for light icon themes
if [[ "$ICON_THEME" == *light* ]]
then
	screencloud --icon-color=black "$@"
else
	screencloud "$@"
fi
