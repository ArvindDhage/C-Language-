#include<stdio.h>
int main(){
    char ch;
    int n;
    printf("Specify Character");
    scanf("%c",&ch);
    printf("Specify number");
    scanf("%d",&n);

    while(n--){
        printf("%c",ch);
    }
}