#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "re2::re2" for configuration ""
set_property(TARGET re2::re2 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(re2::re2 PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libre2.so"
  IMPORTED_SONAME_NOCONFIG "libre2.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS re2::re2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_re2::re2 "${_IMPORT_PREFIX}/lib/libre2.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
