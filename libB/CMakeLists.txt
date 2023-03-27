add_library (libB SHARED "lib_b_api.h" "lib_b_api.cc" )
add_library (sample::libB ALIAS libB)
target_compile_features(libB PUBLIC cxx_std_20)
target_include_directories(libB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
