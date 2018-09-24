#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libappimage_shared" for configuration ""
set_property(TARGET libappimage_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(libappimage_shared PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/static/libappimage_shared.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS libappimage_shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_libappimage_shared "${_IMPORT_PREFIX}/lib/static/libappimage_shared.a" )

# Import target "libappimage" for configuration ""
set_property(TARGET libappimage APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(libappimage PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libappimage.so"
  IMPORTED_SONAME_NOCONFIG "libappimage.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS libappimage )
list(APPEND _IMPORT_CHECK_FILES_FOR_libappimage "${_IMPORT_PREFIX}/lib/libappimage.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
