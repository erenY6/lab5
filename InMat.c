#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
void obrMat()
{
srand(time(NULL));
    const int N=7, M=5;
    int **a;
    int i,j,min=-555;
    a=malloc(N*sizeof(int*));
    if(a==NULL){
            printf("Eror\n");
            return 100;
        }
    for (i=0;i<N;i++){
       a[i]=calloc(N,sizeof(int));
       if(a[i]==NULL){
            for(--i;i>=0;i--)
                free(a[i]);
            free(a);
            printf("Eror\n");
            return 100;
       }
}
    for (i=0;i<N;i++)
        for (j=0; j<M;j++)
            a[i][j] = (rand()%101)-50;
    for (i=0;i<N;i++){
        for (j=0;j<M;j++)
        printf("%5d", *(*(a+i)+j));
        printf("\n");
    }

    for (i=0; i<N;i++)
        for (j=0;j<M;j++)

        if (a[i][j]%3==0)
            a[i][j]=1;
    printf("\n\nizm. matrix\n\n");
    for (i=0;i<N;i++){
        for (j=0;j<M;j++)
        printf("%5d", *(*(a+i)+j));
        printf("\n");
    }
    for (i=0;i<N;i++)
        free(a[i]);
    free(a);
}