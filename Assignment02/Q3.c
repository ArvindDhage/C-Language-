#include<stdio.h>
int main(){
    int num;
    printf("Saticfy statment");
    scanf("%d",&num);
    if(num>0)
    printf("+ve number");
    else if(num<0)
    printf("-ve number");
    else 
    printf("number is zero");
}