#include<stdio.h>
int main(){
    int fact=1 ,i,num;
    printf("Number Specify");
    scanf("%d",&num);

   for(i=1;i<=num;i++){
         fact=fact*i;           
    }
    printf("Factoriel of a number is : %d",fact);
}