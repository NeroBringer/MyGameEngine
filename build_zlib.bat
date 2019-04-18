@echo off
git submodule update --init External/src/zlib
mkdir External\build\zlib
cd External\build\zlib
cmake -DCMAKE_INSTALL_PREFIX=../../ -G "NMake Makefiles" ../../../External/src/zlib
cmake --build . --config release --target install

