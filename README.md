# cmake-protobuf-shared-library
#### How to build:
```.env
git submodule update --init
./external/vcpkg/bootstrap-vcpkg.bat -disableMetrics
```

Then open it in IDE as local folder. IDE will detect CMake and run `vcpkg inslall` that will download the rest of the dependencies.