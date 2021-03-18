#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.hsmro"
    "/Applications/Fuse X.app/Contents/Mono/bin/mono" "/Applications/Fuse X.app/Contents/Uno/uno.exe" adb uninstall "com.apps.hsmro"
    exit $?
    ;;
esac

"/Applications/Fuse X.app/Contents/Mono/bin/mono" "/Applications/Fuse X.app/Contents/Uno/uno.exe" launch-apk "HS MRO.apk" \
    --package=com.apps.hsmro \
    --activity=HSMRO \
    --sym-dir="app/src/main/.uno" \
    "$@"
