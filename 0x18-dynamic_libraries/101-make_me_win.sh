#!/bin/bash
# first step; am to create a dynamic library with a modified version of the "gm" program

echo '#include <stdio.h>' > gm.c
echo '#include <stdlib.h>' >> gm.c
echo '#include <dlfcn.h>' >> gm.c
echo 'int rand(void) { return 9; }' >> gm.c
echo 'int main(int argc, char *argv[]) {' >> gm.c
echo ' void *handle;' >> gm.c
echo ' int (*original_gm)(int, char *[]);' >> gm.c
echo ' handle = dlopen("./gm", RTLD_LAZY)' >> gm.c
echo ' original_gm = dlsym(handle, "main");' >> gm.c
echo ' dlclose(handle);' >> gm.c
echo ' printf("--> Please make me win!\n");' >> gm.c
echo ' return original_gm(argc, argv);' >> gm.c
echo '}' >> gm.c

# next, we are to compile the dynamic library
gcc -shared -fPIC -o libgm.so gm.c

# Then lastly, we set LD_PRELOAD to load the dynamic library before executing gm
export LD_PRELOAD=./libgm.so
