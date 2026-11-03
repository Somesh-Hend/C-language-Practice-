#include <stdio.h>
int main() {
    int a, b = 0;
    printf("Enter Any Three Digit Number: ");
    scanf("%d", &a);
    while (a > 0) {
        b = (b * 10) + a % 10;
        a = a / 10;
    }
    printf("Your Reversed Number is %d\n", b);
    return 0;
}
