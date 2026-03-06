#include<stdio.h>

typedef enum {EXIT,SUMOFDIGITS,REVERSE,PALINDROM,ARMSTRONG} MENU;

int main()
{
    int onum,num,rem,ans=0,rev=0;
    MENU mchoice;
    do
    {    
        printf("\n 0. Exit \n");
        printf("1. Find sum of digits \n");
        printf("2. Find Reverse Number \n");
        printf("3. Conclude Palindrom Y/N? \n");
        printf("4. Conclude Armstrong Y/N? \n");
        scanf("%d",&mchoice);
        if(mchoice !=0 )
        {
            printf("Specify number to process \n");
            scanf("%d",&onum);
            num = onum;
        }
        switch(mchoice)
        {
            case SUMOFDIGITS:
                    while(num!=0){
                        rem=num%10;
                        ans=ans+rem;
                        num=num/10;
                    }
                    printf("sum %d \n",ans);    
                    break;
            case REVERSE:
                    while(num!=0){
                        rem=num%10;
                        rev=(rev*10)+rem;
                        num=num/10;
                    }
                    printf("reverse %d",rev);
                    break;
            case PALINDROM:
                while(num!=0){
                        rem=num%10;
                        rev=(rev*10)+rem;
                        num=num/10;
                    }
                    if(onum==rev)
                    printf("palindrom");
                    else
                    printf("its not palindrom");
                    break;
            case ARMSTRONG:
                while(num!=0)
                {
                      rem = num%10;
                      sum = sum + (rem*rem*rem);
                      num=num/10;
                }
                if(onum == sum)
                     printf("%d is armstrong\n",onum);
                else
                    printf("%d is armstrong\n",onum);
 
                    break;
        }
    } while (mchoice!=EXIT);
}