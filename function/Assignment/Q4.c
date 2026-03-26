/*In above program ,division may fail if denominator is zero.use a global veriable as an flag to avoid this problem.*/


#include<stdio.h>

int add(int ,int);
int sub(int,int);
int mul(int,int);
int div(int ,int);
int flage=0;

int main(){
    int a,b ;
    int result;
    char ch;

    printf("Specify a number : ");
    scanf("%d",&a);
    printf("Specify a number : ");
    scanf("%d",&b);

    printf("Enter a operator to perform the operation  : " );
    scanf("%*c");
    scanf("%c",&ch);

    switch(ch){
        case '+':
           printf("Addition of two number is %d",add(a,b));
          break;

        case '-':
           printf("Subtraction of two number is %d",sub(a,b));
           break;

        case '*':
           printf("Multiplaction  of two number is %d",mul(a,b));
           break;

        case '/':
             result=div(a,b);
             if(flage==1){
                printf("can not divide by zero ");
             }
           else{
            printf("Divadation of two number is %d",result);
           }
           break;

        default:
           printf("Invalid operator");
    }
}


    int add(int a,int b){

        return(a+b);
    }

    int sub(int a,int b){

        return(a-b);
    }

    int mul(int a,int b){

        return(a*b);
    }

    int div(int a,int b){
         if(b==0){
            return flage=1;    
         }
        return(a/b);
    }



