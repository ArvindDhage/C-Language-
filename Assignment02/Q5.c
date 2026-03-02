#include<stdio.h>
int main(){
    int  num1,num2 ,num3;
    printf("Specify Display \n");
    scanf("%d",&num1);
    printf("Specify Display\n");
    scanf("%d",&num2);
    printf("Specify Display \n");
    scanf("%d",&num3);
    if(num1 > num2 && num1 > num3 )
    printf("%d Number is gretter",num1);
    else
    if(num2 > num1 && num2 > num3 )
    printf("%d Number is gretter",num2);
    else 
    printf("%d number is greter ",num3);
}