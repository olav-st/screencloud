#!/bin/bash
#Try to figure out the users icon theme
ICON_THEME=$(gsettings get org.gnome.desktop.interface icon-theme)
if [ -z "$ICON_THEME" ]; then
    ICON_THEME=$(gconftool-2 -g /desktop/gnome/interface/icon_theme)
fi
#Check for light icon themes
if [[ "$ICON_THEME" == *light* ]]
then
    LD_LIBRARY_PATH=/opt/screencloud /opt/screencloud/screencloud --icon-color=black "$@"
else
    LD_LIBRARY_PATH=/opt/screencloud /opt/screencloud/screencloud "$@"
fi
