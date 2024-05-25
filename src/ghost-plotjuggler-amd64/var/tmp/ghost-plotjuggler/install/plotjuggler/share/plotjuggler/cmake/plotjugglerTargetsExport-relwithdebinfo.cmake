#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "plotjuggler::plotjuggler_base" for configuration "RelWithDebInfo"
set_property(TARGET plotjuggler::plotjuggler_base APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(plotjuggler::plotjuggler_base PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libplotjuggler_base.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS plotjuggler::plotjuggler_base )
list(APPEND _IMPORT_CHECK_FILES_FOR_plotjuggler::plotjuggler_base "${_IMPORT_PREFIX}/lib/libplotjuggler_base.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
