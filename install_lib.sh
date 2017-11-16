#!/bin/sh

# Allow to install libraries

mkdir lib/pnl
cd lib/pnl
cmake ../pnl-source
make
make install
