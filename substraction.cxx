#include <stdio.h>

int main() {
    int num1, num2, remain;

    printf("Enter Your First Number: ");
    scanf("%d", &num1);

    printf("Enter Your Second Number: ");
    scanf("%d", &num2);

    remain = num1 - num2;

    printf("Remaining value is: %d\n", remain);

    return 0;
}
