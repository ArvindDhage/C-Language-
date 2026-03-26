/*Write a function to print a given character for a given numberv of time */

#include<stdio.h>
void display(char,int);
int main(){
    int num;
    char ch;

    printf("Specify a Character : ");
    scanf("%c",&ch);
    printf("Specify a number : ");
    scanf("%d",&num);
    display(ch,num);


}

void display(char ch ,int num){

    for(int i=1;i<=num;i++){
        printf("%d %c \n ",i,ch);
    }

}