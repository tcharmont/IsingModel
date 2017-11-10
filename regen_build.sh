#!/bin/sh

# Allow to regenerate the build file

rm -r build
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=lib/pnl -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-std=c++11 -pg" ..
make
