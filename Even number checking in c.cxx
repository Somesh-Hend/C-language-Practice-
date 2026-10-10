#include <stdio.h>

int main() {
    int num1;
    printf("Enter Your Number: ");
    scanf("%d", &num1);
    
    if (num1 % 2 == 0) {
        printf("Its even number\n");
    } else {
        printf("Its odd number\n");
    }
    return 0;
}
