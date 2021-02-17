# CppBasic

Prepare compilation:
```
mkdir build
cd build
conan install ..
cmake ..
```

Build application for debugging
```
cd build
cmake --build . --config Debug --target BasicApplication -- -j 6
```

Build all (application and tests)
```
cd build
cmake --build . --config Debug --target all -- -j 6
```

Run all tests
```
cd build
ctest -j6 -C Debug -T test --output-on-failure
```