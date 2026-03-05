// leap year are using in ternary operator //also called as the conditionl operator

#include<stdio.h>
int main(){
    int year;
    printf("Specify year: "); 
    scanf("%d",&year);

    (year%400==0 && year%100!=0 || year%4==0)? printf("Leap year"):printf("Its no a leap year");
}