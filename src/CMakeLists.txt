get_filename_component(moudle "${PROJECT_NAME}" NAME)

# make cache variables for install destinations
include(GNUInstallDirs)

include("${CMAKE_SOURCE_DIR}/cmake/Helper.cmake")

internal_add_files(src_files header_files)

message(DEBUG ${src_files})
message(DEBUG ${header_files})


# create library
add_library(${moudle} STATIC ${src_files})

# state that anybody linking to us needs to include the current source dir
# to find *.h, while we don't.
# We need to tell CMake that we want to use different include directories 
# depending on if we're building the library or using it from an installed location
target_include_directories(${moudle}
                          INTERFACE 
                          "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
                          "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)


# install the target and create export-set
install(TARGETS ${moudle}
        EXPORT ${moudle}Targets
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(FILES ${header_files} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# install the configuration targets
install(EXPORT ${moudle}Targets
  FILE ${moudle}Targets.cmake
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${moudle}
)

include(CMakePackageConfigHelpers)

# generate the version file for the config file
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/${moudle}ConfigVersion.cmake"
  VERSION "${Provider_VERSION_MAJOR}.${Provider_VERSION_MINOR}"
  COMPATIBILITY AnyNewerVersion
)

# generate the config file that is includes the exports
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/${moudle}Config.cmake"
  INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${moudle}
)

# install config files
install(FILES
  "${CMAKE_CURRENT_BINARY_DIR}/${moudle}Config.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/${moudle}ConfigVersion.cmake"
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${moudle}
)

# generate the export targets for the build tree
export(EXPORT ${moudle}Targets
  FILE "${CMAKE_CURRENT_BINARY_DIR}/${moudle}Targets.cmake"
  NAMESPACE DesignPattern::
)

include("${CMAKE_SOURCE_DIR}/cmake/Helper.cmake")

internal_add_subdirectorys(modules)
