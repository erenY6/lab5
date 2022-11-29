#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>
void LoadRun(const char * const s) {
void * lib;
void (*fun)(void);
void (*fun1)(void);
lib = LoadLibrary(s);
if (!lib) {
printf("cannot open library '%s'\n", s);
return;
}
fun = (void (*)(void))GetProcAddress((HINSTANCE)lib, "obrMas");
if (fun != NULL)
fun();
fun1 = (void (*)(void))GetProcAddress((HINSTANCE)lib, "obrMat");
if (fun1 != NULL)
fun1();
FreeLibrary((HINSTANCE)lib);
}

