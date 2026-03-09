#include<stdio.h>
int main(){
    int num ,i;
    printf("Number Specify");
    scanf("%d",&num);

   for(i=1;i<=10;i++){
      printf("%d * %d = %d \n",num,i,i*num);
    }
}