#include<stdio.h>

typedef enum {EXIT,ADDITION,SUBTRACTION,MULTIPLACTION,DIVISION} MENU;

int main()
{
    int onum,num,rem,ans=0,rev=0, a,b ,c ;
    MENU mchoice;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);

    do
    {    
        printf("\n 0. Exit \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplaction  \n");
        printf("4. Division \n");
        scanf("%d",&mchoice);
        
        switch(mchoice)
        {
            case ADDITION :
                    {
                        c=a+b;
                        printf("Addition of two number is :%d ",c);   
                    }  
                    break;
            case SUBTRACTION:
                    {
                        c=a-b;
                        printf("Subraction of two number is :%d ",c); 
                    }
                    break;
            case MULTIPLACTION:
                    {
                        c=a*b;
                        printf("Multiplaction of two number is :%d ",c); 
                    }
                    break;
            case DIVISION:
                {
                       c=a/b;
                       printf("Division of two number is :%d ",c); 
                }
                break;
        }
    } while (mchoice!=EXIT);
}