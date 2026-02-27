#include<stdio.h>
int main(){
    int n=9361,a,b,c,d;
    a=n/1000;
    n=n%1000;
    b=n/100;
    n=n%100;
    c=n/10;
    n=n%10;
    d=n;
    printf("%d %d %d %d \n",a,b,c,d);
    
    n=a*1000+b*100+c*10+d;

    printf("%d = %d + %d + %d + %d \n",n,a*1000,b*100,c*10,d);

    n=d*1000+c*100+b*10+a;
    printf("%d \n",n);




   /*n=a*1000+b*100+c*10+d;
   printf(n);
   n=d*100+c*100+b*10+c;
   printf(n);*/

}