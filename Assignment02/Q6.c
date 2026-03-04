#include<stdio.h>
int main(){
    int num,d1,d2,d3,d4,d5,rev;
    printf("Specfy number \n");
    scanf("%d",&num);
    d1=num/10000;
    num%=10000;

    d2=num/1000;
    num%=1000;

    d3=num/100;
    num%=100;

    d4=num/10;
    num%=10;

    d5=num;
   
    rev=d5*100000+d4*10000+d3*1000+d4*100+d5*10;

    printf("%d %d %d %d %d",d1,d2,d3,d4,d5);
   
    if(d1==d5 && d2==d4 )
            printf("Given number is palindrome");
        
    else
    printf("Given number is not palindrome");

    
}