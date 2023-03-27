add_executable (sample_app "main.cc")
target_compile_features(sample_app PUBLIC cxx_std_20)
target_link_libraries(sample_app  
	PRIVATE 
		sample::proto
		#sample::libB
		sample::libA
)
target_include_directories(sample_app PRIVATE ${PROJECT_SOURCE_DIR}/include)
set_property(TARGET sample_app PROPERTY
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")