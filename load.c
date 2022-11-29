#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <dlfcn.h>
void LoadRun(const char * const s) {
void * lib;
void (*fun)(void);
void (*fun1)(void);
lib = dlopen(s, RTLD_LAZY);
if (!lib) {
printf("cannot open library '%s'\n", s);
return;
}
fun = (void (*)(void))dlsym(lib, "obrMas");
if (fun != NULL)
fun();
fun1 = (void (*)(void))dlsym(lib, "obrMat");
if (fun1 != NULL)
fun1();
dlcloce(lib);
}

