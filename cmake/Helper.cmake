function(internal_find_modules out_module_list)
  set(module_list "")
  file(GLOB directories LIST_DIRECTORIES true RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" *)
  foreach(directory IN LISTS directories)
    if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${directory}"
      AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${directory}/CMakeLists.txt")
      list(APPEND module_list "${directory}")
    endif()
  endforeach()
  set(${out_module_list} "${module_list}" PARENT_SCOPE)
endfunction()


function(internal_add_subdirectory directory)
  get_filename_component(_fullPath ${directory} ABSOLUTE)
  if(EXISTS ${_fullPath}/CMakeLists.txt)
    if(DISABLE_ALL_OPTIONAL_SUBDIRECTORIES)
    set(_DEFAULT_OPTION_VALUE FALSE)
    else()
    set(_DEFAULT_OPTION_VALUE TRUE)
    endif()
    if(DISABLE_ALL_OPTIONAL_SUBDIRS  AND NOT DEFINED  BUILD_${directory})
    set(_DEFAULT_OPTION_VALUE FALSE)
    endif()
    option(BUILD_${directory} "Build directory ${directory}" ${_DEFAULT_OPTION_VALUE})
    if(BUILD_${directory})
    add_subdirectory(${directory})
    endif()
  endif()
endfunction()

function(internal_add_subdirectorys out_module_list)
  internal_find_modules(module_list)
  set(${out_module_list} "${module_list}" PARENT_SCOPE)
  foreach(module IN LISTS module_list)
    message(DEBUG "Configuring submodule '${module}'")
    internal_add_subdirectory("${module}")
  endforeach()
endfunction()

function(internal_add_files out_src_list out_header_list)
  internal_find_modules(module_list)
  set(src_files "")
  set(header_files "")
  foreach(module IN LISTS module_list)
      message("Configuring submodule '${module}'")
      get_filename_component(_fullPath ${module} ABSOLUTE)
      message(DEBUG "internal_add_files ${_fullPath}")
      file(GLOB current_src_files "${_fullPath}/*.cpp")
      file(GLOB current_header_files "${_fullPath}/*.hpp")
      message(DEBUG "internal_add_files ${current_src_files}")
      message(DEBUG "internal_add_files ${current_header_files}")
      list(APPEND src_files "${current_src_files}")
      list(APPEND header_files "${current_header_files}")
  endforeach()
  message(DEBUG "internal_add_files::src_files:: ${src_files}")
  message(DEBUG "internal_add_files::header_files  ${header_files}")
  set(${out_src_list} "${src_files}" PARENT_SCOPE)
  set(${out_header_list} "${header_files}" PARENT_SCOPE)
endfunction()