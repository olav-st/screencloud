#!/bin/bash
if [ -n "$SNAP" ]; then
	#Set PYTHONHOME if running as a snap
	export PYTHONHOME=$SNAP/usr
	echo "Setting PYTHONHOME=$PYTHONHOME"
	if ! ls $PYTHONHOME/lib/python* 1> /dev/null 2>&1; then
		echo "Warning, there seems to be no python directories under PYTHONHOME/lib"
	fi
	export PYTHONPATH=$SNAP/lib/python3.12/site-packages:$SNAP/usr/share/screencloud/modules
	echo "Setting PYTHONPATH=$PYTHONPATH"
	#Set autostart location
	export SC_AUTOSTART_EXEC=screencloud
	#Set TMPDIR to outside the snap to allow using Gnome DBus screenshot API
	export TMPDIR=$SNAP_USER_COMMON
	# Map snapd's SNAP_ARCH to the GNU triplet
	case "$SNAP_ARCH" in
		amd64)  ARCH_TRIPLET="x86_64-linux-gnu" ;;
		arm64)  ARCH_TRIPLET="aarch64-linux-gnu" ;;
		armhf)  ARCH_TRIPLET="arm-linux-gnueabihf" ;;
		*)      echo "Unsupported arch: $SNAP_ARCH"; exit 1 ;;
	esac

	export DISABLE_WAYLAND=1
	export QT_PLUGIN_PATH="$SNAP/usr/lib/$ARCH_TRIPLET/qt6/plugins"
	export QT_XCB_GL_INTEGRATION=none
	export XDG_DATA_DIRS="$SNAP/usr/share:${XDG_DATA_DIRS:-/usr/local/share:/usr/share}"
	export XDG_CONFIG_DIRS="$SNAP/etc/xdg:${XDG_CONFIG_DIRS:-/etc/xdg}"
	export QT_QPA_PLATFORMTHEME=gtk3
	export QT_STYLE_OVERRIDE=adwaita

	exec screencloud "$@"
else
	#Do the same, but for AppImage
	HERE="$(dirname "$(readlink -f "${0}")")"
	export PYTHONHOME="${HERE}/.."
	export PYTHONPATH="${HERE}/../lib/python3.12:${HERE}/../share/screencloud/modules"
	export SC_AUTOSTART_EXEC=${APPIMAGE}
	exec "${HERE}/screencloud" "$@"
fi
