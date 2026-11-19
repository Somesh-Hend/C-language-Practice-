#include <stdio.h>
int main(){
    int num,i=1,n=1;
    printf("Enter Number:");
    scanf("%d",&num);
    for(i=1;n<=num;i++)
    {
        n=i*i;
       if (n==num){
            printf("%d is Perfect Square of %d",num,i);
        break;
       }
    }
    if (n!=num){
        printf("%d is not perfect square",num);
    }
    return 0;
}
    