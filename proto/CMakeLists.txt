find_package(Protobuf CONFIG REQUIRED)
#protobuf_generate_cpp(PROTO_SRC PROTO_HDR EXPORT_MACRO "__declspec(dllexport)" schema.proto)
protobuf_generate_cpp(PROTO_SRC PROTO_HDR schema.proto)

add_library (proto ${PROTO_HDR} ${PROTO_SRC})
add_library (sample::proto ALIAS proto)
target_compile_features(proto PUBLIC cxx_std_17)
target_link_libraries(proto PUBLIC ${Protobuf_LIBRARIES})
target_include_directories(proto 
	PUBLIC 
		${CMAKE_CURRENT_BINARY_DIR}
		${Protobuf_INCLUDE_DIRS}
)
set_property(TARGET proto PROPERTY
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")