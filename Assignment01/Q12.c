#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    char ch ;
    printf("---------------------------------------------------------------------- \n");
    printf(" Data Type \t       Size  Format Specifier    Range \n ");
    printf("---------------------------------------------------------------------- \n");
    printf(" float \t \t \t %d \t%%f \t  \t %d to %d \n ",sizeof(float),FLT_MIN,FLT_MAX);
    printf(" double  \t \t %d \t %%g\t \t %g  to %g\n ",sizeof(double),DBL_MIN,DBL_MAX);
    printf(" long double  \t \t %d \t %%e \t \t %e to %e \n ",sizeof(long double),LDBL_MIN,LDBL_MAX);
    printf("---------------------------------------------------------------------- \n");
}