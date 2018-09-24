#! /bin/bash

git checkout ll.c Makefile.am fuseprivate.c fuseprivate.h hl.c ll.h ll_inode.c nonstd-daemon.c

patch -p1 < /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/src/patches/squashfuse.patch
patch -p1 < /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/src/patches/squashfuse_dlopen.patch

cp -v /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/src/patches/squashfuse_dlopen.c /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/src/patches/squashfuse_dlopen.h .
