#!/bin/bash
wget https://github.com/CJ-The-Black-Child/alx-low_level_programming/raw/master/0x18-dynamic_libraries/dynamic_library.so
export LD_PRELOAD=./dynamic_library.so
