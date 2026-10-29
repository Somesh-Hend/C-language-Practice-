#include <stdio.h>
int main(){
    int a,b,n,sum=0;
    printf("Enter Number:");
    scanf("%d",&a);
    printf("Enter Number:");
    scanf("%d",&b);
    n=a;
    while (n<=b){
        sum=sum+n;
        n++;
    }
    printf("Your Sum is %d",sum);
    return 0;
}