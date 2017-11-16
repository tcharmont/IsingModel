#!/bin/sh

# Allow to install libraries

if [ ! -d "lib/pnl" ]; then
    mkdir lib/pnl
    cd lib/pnl
    cmake ../pnl-source
    make
    make install
else
    echo "PNL is already installed";
fi
