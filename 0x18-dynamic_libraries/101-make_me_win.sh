#!/bin/bash
wget -P /tmp https://github.com/CJ-The-Black-Child/alx-low_level_programming/raw/master/0x18-dynamic_libraries/shakahola.so
export LD_PRELOAD=/tmp/shakahola.so
