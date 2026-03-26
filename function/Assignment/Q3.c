/*Write a Function to implement four function calculator.function woild take operands and operator as argument and return result*/

#include<stdio.h>

int add(int ,int);
int sub(int,int);
int mul(int,int);
int div(int ,int);

int main(){
    int a,b ;
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
           printf("Divadation of two number is %d",div(a,b));
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

        return(a/b);
    }



