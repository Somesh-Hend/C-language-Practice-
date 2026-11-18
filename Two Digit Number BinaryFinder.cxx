#include <stdio.h>
int main( ){
    int num,num1,num2,num3,num4,num5,num6,num7;
    printf("Welcome To binary Number Calculator\n");
    printf("Enter Any Two Digit Number:");
    scanf("%d",&num);
    num1=num%2;
    num=num/2;
    num2=num%2;
    num=num/2;
    num3=num%2;
    num=num/2;
    num4=num%2;
    num=num/2;
    num5=num%2;
    num=num/2;
    num6=num%2;
    num=num/2;
    num7=num%2;
    num=num/2;
    printf("%d%d%d%d%d%d%d",num7,num6,num5,num4,num3,num2,num1);
    return 0;
}