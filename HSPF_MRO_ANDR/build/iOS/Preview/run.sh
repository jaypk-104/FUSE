#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Targets/iOS/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Xcode"
##if #(Cocoapods:Defined)
#    pod install
#    open -aXcode "#(Project.Name).xcworkspace"
##else
    open -aXcode "HS MRO.xcodeproj"
##endif
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.hsmro.hsn"
    chmod +x "/usr/local/share/uno/Packages/UnoCore/1.12.0/prebuilt/iOS/bin/ios-deploy"
    "/usr/local/share/uno/Packages/UnoCore/1.12.0/prebuilt/iOS/bin/ios-deploy" -9 -1 "com.hsmro.hsn"
    exit $?
    ;;
esac

chmod +x "/usr/local/share/uno/Packages/UnoCore/1.12.0/prebuilt/iOS/bin/ios-deploy"

##if #(Cocoapods:Defined)
#pod install
#"#(Base.Directory)/bin/ios-deploy" --noninteractive --debug --bundle "build/Build/Products/#(Pbxproj.Configuration)-iphoneos/#(Project.Name).app" "$#"
##else
"/usr/local/share/uno/Packages/UnoCore/1.12.0/prebuilt/iOS/bin/ios-deploy" --noninteractive --debug --bundle "build/Release-iphoneos/HS MRO.app" "$@"
##endif
