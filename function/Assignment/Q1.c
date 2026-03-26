//Factorial of a number using function 

#include<stdio.h>
int factorial(int);

int main(){
int num,fact;
printf("Specify a number : ");
scanf("%d",&num);
fact=factorial(num);
printf("Factorial of number is : %d",fact);
}

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){

        fact=fact*i;
    }
    return fact;
}