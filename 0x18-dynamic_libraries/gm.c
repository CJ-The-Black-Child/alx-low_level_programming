#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int rand(void) { return 9; }

int main(int argc, char *argv[])
{
	void *handle;
	int(*original_gm)(int, char *[]);
	handle =dlopen("./gm". RTLD_LAZY);
	original_gm = dlsym(handle, "main");
	dlclose(handle);
	printf("--> Please make me win!\n");
	return (original_gm(argc, argv));
}
