#include <stdio.h>
int main (){
    int num1,num2;
    int result;
    char sign;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Secand Number:");
    scanf("%d",&num2);
    printf("Enter the sign '+','-','/','*':");
    scanf(" %c",&sign);
    switch (sign){
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;
    case '/':
    result=num1/num2;
    break;
    case '*':
    result=num1*num2;
    break;
    }
    printf("Your Answer is %d",result);
    return 0;
}