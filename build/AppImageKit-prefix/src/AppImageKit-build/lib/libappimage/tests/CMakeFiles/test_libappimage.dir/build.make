# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build

# Include any dependencies generated for this target.
include lib/libappimage/tests/CMakeFiles/test_libappimage.dir/depend.make

# Include the progress variables for this target.
include lib/libappimage/tests/CMakeFiles/test_libappimage.dir/progress.make

# Include the compile flags for this target's objects.
include lib/libappimage/tests/CMakeFiles/test_libappimage.dir/flags.make

lib/libappimage/tests/CMakeFiles/test_libappimage.dir/test_libappimage.cpp.o: lib/libappimage/tests/CMakeFiles/test_libappimage.dir/flags.make
lib/libappimage/tests/CMakeFiles/test_libappimage.dir/test_libappimage.cpp.o: /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/tests/test_libappimage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/libappimage/tests/CMakeFiles/test_libappimage.dir/test_libappimage.cpp.o"
	cd /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_libappimage.dir/test_libappimage.cpp.o -c /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/tests/test_libappimage.cpp

lib/libappimage/tests/CMakeFiles/test_libappimage.dir/test_libappimage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_libappimage.dir/test_libappimage.cpp.i"
	cd /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/tests/test_libappimage.cpp > CMakeFiles/test_libappimage.dir/test_libappimage.cpp.i

lib/libappimage/tests/CMakeFiles/test_libappimage.dir/test_libappimage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_libappimage.dir/test_libappimage.cpp.s"
	cd /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/tests/test_libappimage.cpp -o CMakeFiles/test_libappimage.dir/test_libappimage.cpp.s

# Object files for target test_libappimage
test_libappimage_OBJECTS = \
"CMakeFiles/test_libappimage.dir/test_libappimage.cpp.o"

# External object files for target test_libappimage
test_libappimage_EXTERNAL_OBJECTS =

lib/libappimage/tests/test_libappimage: lib/libappimage/tests/CMakeFiles/test_libappimage.dir/test_libappimage.cpp.o
lib/libappimage/tests/test_libappimage: lib/libappimage/tests/CMakeFiles/test_libappimage.dir/build.make
lib/libappimage/tests/test_libappimage: lib/libappimage/src/libappimage/libappimage.so
lib/libappimage/tests/test_libappimage: lib/libappimage/src/xdg-basedir/libxdg-basedir.a
lib/libappimage/tests/test_libappimage: lib/libappimage/lib/gtest/googlemock/gtest/libgtest.a
lib/libappimage/tests/test_libappimage: lib/libappimage/src/libappimage_shared/libappimage_shared.a
lib/libappimage/tests/test_libappimage: lib/libappimage/squashfuse-EXTERNAL-prefix/src/squashfuse-EXTERNAL/.libs/libsquashfuse.a
lib/libappimage/tests/test_libappimage: lib/libappimage/squashfuse-EXTERNAL-prefix/src/squashfuse-EXTERNAL/.libs/libsquashfuse_ll.a
lib/libappimage/tests/test_libappimage: lib/libappimage/squashfuse-EXTERNAL-prefix/src/squashfuse-EXTERNAL/.libs/libfuseprivate.a
lib/libappimage/tests/test_libappimage: lib/libappimage/tests/CMakeFiles/test_libappimage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_libappimage"
	cd /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_libappimage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/libappimage/tests/CMakeFiles/test_libappimage.dir/build: lib/libappimage/tests/test_libappimage

.PHONY : lib/libappimage/tests/CMakeFiles/test_libappimage.dir/build

lib/libappimage/tests/CMakeFiles/test_libappimage.dir/clean:
	cd /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_libappimage.dir/cmake_clean.cmake
.PHONY : lib/libappimage/tests/CMakeFiles/test_libappimage.dir/clean

lib/libappimage/tests/CMakeFiles/test_libappimage.dir/depend:
	cd /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit/lib/libappimage/tests /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/tests/CMakeFiles/test_libappimage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/libappimage/tests/CMakeFiles/test_libappimage.dir/depend

