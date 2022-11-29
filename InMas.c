#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
void obrMas()
{
srand(time(NULL));
    const int A=76;
    int a[A];
    int i;
    for (int i = 0; i<A; i++)
        a[i] = (rand()%101)-50;
            printf("Massive\n");
        for (int i = 0; i<A; i++)
            printf("%d ", a[i]);
    for (i = 0; i<A; i++)
    {
        if (a[i]%3==0)
            a[i]=1;
    }
    printf ("\n\nizm. massive\n\n");
    for (int i = 0; i<A; i++)
            printf("%d ", a[i]);
}