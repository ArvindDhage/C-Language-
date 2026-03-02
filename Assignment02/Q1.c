#include<stdio.h>
int main(){
    float ans, num1,num2;
    printf("Specify Display");
    scanf("%d",&num1);
    printf("Specify Display");
    scanf("%d",&num2);
    if(num2==0)
           printf("user enetr zero");
    else
        ans=num1/num2;
        printf("Division of two number is %d",ans);
    
}