#include <stdio.h>
int main(){
    int num1, num2, result;
    char sign;
    printf("Enter Your First Number: ");
    scanf("%d", &num1);
    printf("Enter Sign:");
    scanf(" %c",&sign);
    printf("Enter Your Second Number: ");
    scanf("%d", &num2);
    if (sign=='+'){
        result=num1+num2;
        printf("Answer:%d\n:",result);
    }else if (sign=='-'){
        result=num1-num2;
        printf("Answer:%d\n",result);
    }else if (sign=='*'){
             result=num1*num2;
             printf("Answer:%d\n:",result);
    }else if (sign=='/'){
        result=num1/num2;
        printf("Answer:%d\n:",result); 
    }else
    printf("Enter Correct Sign");
        return 0;            
}