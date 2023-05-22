#!/bin/bash

cat << 'EOF' > win_gm.c

#include <stdio.h>
#include <stdlib.h>

void gm(int n1, int n2, int n3, int n4, int n5, int bonus)
{
	printg("You win the jackpot !\n");
	exit(0);
}
EOF

# Compile the code
gcc -shared -o win_gm.so win_gm.c

export LD_PRELOAD=./win_gm.so
