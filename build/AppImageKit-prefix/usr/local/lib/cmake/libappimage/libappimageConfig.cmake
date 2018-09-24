# - Config file for the AppImage package
# It defines the following variables
#  LIBAPPIMAGE_INCLUDE_DIRS - include directories for LIBAPPIMAGE
#  LIBAPPIMAGE_LIBRARIES    - libraries to link against

# Compute paths
get_filename_component(LIBAPPIMAGE_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(LIBAPPIMAGE_INCLUDE_DIRS "")

# Our library dependencies (contains definitions for IMPORTED targets)
include("${LIBAPPIMAGE_CMAKE_DIR}/libappimageTargets.cmake")

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB REQUIRED glib-2.0)
pkg_check_modules(GIO REQUIRED gio-2.0)
pkg_check_modules(ZLIB REQUIRED zlib)
pkg_check_modules(CAIRO REQUIRED cairo)
pkg_check_modules(OPENSSL REQUIRED openssl)

find_library(LIBAPPIMAGE_SHARED_PATH
    NAMES appimage
    HINTS "${CMAKE_PREFIX_PATH}"
)

set(LIBAPPIMAGE_LIBRARIES ${LIBAPPIMAGE_SHARED_PATH})
