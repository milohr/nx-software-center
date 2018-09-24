# CMake generated Testfile for 
# Source directory: /home/camilo/Coding/qml/nx-software-center
# Build directory: /home/camilo/Coding/qml/nx-software-center/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/local/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/camilo/Coding/qml/nx-software-center/build/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
subdirs("src")
subdirs("test")
