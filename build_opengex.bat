@echo off
git submodule update --init External/src/opengex
mkdir External\build\opengex
pushd External\build\opengex
cmake -DCMAKE_INSTALL_PREFIX=../../ -G "Visual Studio 15 2017 Win64" ../../src/opengex
cmake --build . --config release --target install
popd

