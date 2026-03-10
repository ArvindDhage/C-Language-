#include<stdio.h>

int accept();
int factorial(int,int);
int main(){
     int num ,fact=1;
     num = accept();
     fact = factorial(num,fact);
     printf("Factoriel of a number is : %d",fact);
}

int accept(){
    int num;
    printf("Specify Number: ");
    scanf("%d",&num);
    return num;
}

int factorial(int num ,int fact){
    for(int i=1;i<=num;i++){
         fact=fact*i; 
    }
    return fact;
}