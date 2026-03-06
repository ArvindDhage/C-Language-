#include<stdio.h>
int main(){
    int num;
    int i=1;
    printf("Specfy a number  :  ");
    scanf("%d",&num);
    while(i<=10){
        printf("%d * %d = %d \n",num,i,num*i);
        i++;
    }
}