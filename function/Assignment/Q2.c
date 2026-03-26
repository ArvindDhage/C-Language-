//Calculate Power of number using function 

#include<stdio.h>

int power();
void main(){
    int x,pow;
    printf("Specify a number : ");
    scanf("%d",&x);
    pow=power(x);
    printf("Power of given number %d is %d",x,pow);
    
}
int power(int x){

    return x*x;

}