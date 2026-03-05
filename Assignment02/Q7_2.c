//leap year using the logical operagtor

#include<stdio.h>
int main(){
    int year;
    printf("Specify Year");
    scanf("%d",&year);
    if(year%400==0 && year%100!=0 || year%4==0)
        printf("Leap year");
    else
        printf("Its no a leap year");
}