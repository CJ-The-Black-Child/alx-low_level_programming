#!/bin/bash

cat << 'EOF' > gm

echo "You win the jackpot!"

EOF

chmod +x gm

export LD_PRELOAD=./dynamic.library.so
