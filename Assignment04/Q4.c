#include<stdio.h>
int error_flag = 0;
int accept();
char operator();
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);

int main(){
    int a,b;
    char ch;
    a=accept();
    b=accept();
    ch=operator();
    


    switch(ch){
        case '+':
        printf("Addition of two number is : %d",add(a,b));
        break;

        case '-':
        
        printf("Subtraction of two number is : %d",sub(a,b));
        break;

        case '*':
        
        printf("Multiplaction of two number is : %d",mul(a,b));
        break;


        case '/':
        if(b == 0)
        {
            error_flag = 1;
            printf("Error: Division by zero not allowed");
        }
        else
        printf("Dividation of two number is : %d",div(a,b));
        break;


        case '%':
        
        printf("Modules of two number is : %d",mod(a,b));
        break;


        
    }
}

int add(int a ,int b){
    return a+b;
}

int sub(int a ,int b){
    return a-b;
}

int mul(int a ,int b){
    return a*b;
}

int div(int a ,int b){
    return a/b;
}

int mod(int a ,int b){
    return a%b;
}

int accept(){
    int a;
    printf("Specify number ");
    scanf("%d",&a);
    return a;
}

char operator(){
    char ch;
    printf("Enter a operator");
    scanf("%*c %c",&ch);
    return ch;
}