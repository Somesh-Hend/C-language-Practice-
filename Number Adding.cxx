#include <stdio.h>
int main( ){
    int a,b,i,sum=0;
    printf("Enter Your Number:");
    scanf("%d",&a);
    printf("Enter Secand Number:");
    scanf("%d",&b);
    for (int i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("Your Sum is %d",sum);
    return 0;
}