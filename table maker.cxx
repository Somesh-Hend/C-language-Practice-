#include <stdio.h>
int main() {
    int n, i;
    printf("Enter Your Num: ");
    scanf("%d", &n);
    i = 1;
    while (i <= 10) { 
        printf("%d x %d = %d\n", n, i, n * i);
        i++; 
    }
    return 0;
}
