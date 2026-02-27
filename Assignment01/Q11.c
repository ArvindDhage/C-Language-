#include<stdio.h>
#include<limits.h>
int main(){
    char ch ;
    printf("---------------------------------------------------------------------- \n");
    printf(" Data Type \t       Size  Format Specifier    Range \n ");
    printf("---------------------------------------------------------------------- \n");
    printf(" char \t \t \t %d \t%%c \t  \t %d \n ",sizeof(char),SCHAR_MIN,SCHAR_MAX);
    printf(" unsigned char  \t %d \t %%c\t \t %d \n ",sizeof(unsigned char),SCHAR_MIN,SCHAR_MAX);
    printf(" short int  \t \t %d \t %%hd \t \t %d \n ",sizeof(short int),SCHAR_MIN,SCHAR_MAX);
    printf(" unsigned short int   \t %d \t %%hu \t \t %d \n ",sizeof(unsigned short int),SCHAR_MIN,SCHAR_MAX);
    printf(" int \t \t \t %d \t %%c \t \t %d \n ",sizeof(int),SCHAR_MIN,SCHAR_MAX);
    printf(" unsigned int   \t %d \t %%c \t \t %u \n ",sizeof(unsigned int),SCHAR_MIN,SCHAR_MAX);
    printf(" long int \t \t %d \t %%c \t \t %ld \n ",sizeof(long int),SCHAR_MIN,SCHAR_MAX);
    printf(" unsigned long int  \t %d \t %%lu \t \t %d \n ",sizeof(char),SCHAR_MIN,SCHAR_MAX);
    printf("---------------------------------------------------------------------- \n");
}