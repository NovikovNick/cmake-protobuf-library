cmake_minimum_required (VERSION 3.15)
set(VCPKG_TARGET_TRIPLET x64-windows-static)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/external/vcpkg/scripts/buildsystems/vcpkg.cmake")
project ("cmake-protobuf-shared-library"
    VERSION 0.1.0
    DESCRIPTION "Protobuf as shared library example"
    LANGUAGES CXX)

function(print var)
	message("${var} = ${${var}}")
endfunction()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

add_subdirectory ("proto")
add_subdirectory ("libA")
#add_subdirectory ("libB")
add_subdirectory ("app")
