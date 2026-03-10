#include<stdio.h>
#include<math.h>


int accept();
int calculate(int,int);

int main(){
int num,power,res;
num=accept();
power=accept();
res=calculate(num,power);
printf("Calculation of given number power is : %d",res);
}

int accept(){
    int num;
    printf("Specify number");
    scanf("%d",&num);
    return num;
}


int calculate(int num ,int power){
    int res=1;
    for(int i=1;i<=power;i++){
        res*=num;
    }
    return res;

}