#include <stdio.h>
int main()
{
    int num1, i, a ;
    printf("Enter a positive number:");
    scanf("%d", &num1);
    if (num1>1){
        for (i = 2; i < num1; i++){
            a = num1 % i;
            a==0;
            break;
    }
    } else
    {
        printf("Enter Correct Number");
    }
    if (a==0){
        printf("Its not Prime Number");
    } else {
        printf("It is Prime Number");
    }
    return 0;
}
