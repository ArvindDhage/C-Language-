#include<stdio.h>
#include<math.h>

    void main(){
        int a ,b ,c,area,per,s;
        printf("Enter a value of a ");
        scanf("%d",&a);
        printf("Enter a value of b");
        scanf("%d",&b);
        printf("Enter a value of c ");
        scanf("%d",&c);
        per=a+b+c+b+c;
        printf("Parimeter is %d \n",per);
        s=a+b+c/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area is %d \n",area);
    }

