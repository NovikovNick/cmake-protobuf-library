add_library (libA SHARED)
add_library (sample::libA ALIAS libA)
target_compile_features(libA PUBLIC cxx_std_20)
target_sources(libA INTERFACE "lib_a_api.h" PRIVATE "lib_a_api.cc")
target_link_libraries(libA 
    PRIVATE
        sample::proto
)
target_include_directories(libA 
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
set_property(TARGET libA PROPERTY
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")