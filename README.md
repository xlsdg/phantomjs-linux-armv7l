# phantomjs-linux-armv7l

PhantomJS 1.9.8 compiled on a Raspberry PI (Raspbian "wheezy").

PhantomJS is a headless WebKit with JavaScript API. It has fast and native support for various web standards: DOM handling, CSS selector, JSON, Canvas, and SVG. (http://phantomjs.org).

Build Process
-------------

PhantomJS has been built using the process described below.


1. According to [PhantomJS build instruction](http://phantomjs.org/build.html):

        $ wget https://bitbucket.org/ariya/phantomjs/downloads/phantomjs-1.9.8-source.zip
        $ unzip phantomjs-1.9.8-source.zip
        $ cd phantomjs-1.9.8

2. Install the development packages:

        $ sudo apt-get install build-essential g++ flex bison gperf ruby perl libsqlite3-dev libfontconfig1-dev libicu-dev libfreetype6 libssl-dev libpng-dev libjpeg-dev python libx11-dev libxext-dev libqtwebkit-dev

3. Download additional 3rdparty files:

        $ mkdir src/qt/src/3rdparty/pixman && pushd src/qt/src/3rdparty/pixman && curl -O https://raw.githubusercontent.com/openwebos/qt/master/src/3rdparty/pixman/README && curl -O https://raw.githubusercontent.com/openwebos/qt/master/src/3rdparty/pixman/pixman-arm-neon-asm.h && curl -O https://raw.githubusercontent.com/openwebos/qt/master/src/3rdparty/pixman/pixman-arm-neon-asm.S; popd

4. Open `./build.sh` and delete lines 11-34(use vim :11,34d):
        
        .. ...
        11 if [[ "$MAKEFLAGS" != "" ]]; then
        12 MAKEFLAGS_JOBS=$(echo $MAKEFLAGS | egrep -o '\-j[0-9]+' | egrep -o '[0-9]+')
        .. ...
        34 fi
        .. ...
        
5. Open `./src/qt/preconfig.sh` and add the following options to QT_CFG after ' -no-stl':

        .. ...
        29 QT_CFG+=' -no-exceptions'       # Do not use C++ exception
        30 QT_CFG+=' -no-stl'              # No need for STL compatibility
        31 QT_CFG+=' -no-pch'
        32 QT_CFG+=' -no-mmx'
        33 QT_CFG+=' -no-3dnow'
        34 QT_CFG+=' -no-sse'
        35 QT_CFG+=' -no-sse2'
        36 QT_CFG+=' -no-sse3'
        37 QT_CFG+=' -no-ssse3'
        38 QT_CFG+=' -no-sse4.1'
        39 QT_CFG+=' -no-sse4.2'
        40 QT_CFG+=' -no-avx'
        .. ...
        
6. Open `./src/qt/config.tests/qpa/wayland/wayland.cpp` and comment the line 41:
        
        .. ...
        //#include <wayland-client.h>
        .. ...
        
7. Start the compilation
        
        $ nohup ./build.sh --confirm > build.sh.out 2> build.sh.err &

