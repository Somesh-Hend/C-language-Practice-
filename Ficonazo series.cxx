#include <stdio.h>
int main()
{
    int i,a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter Last Number:");
    scanf("%d",&c);
    printf("%d,%d,",a,b);
    for(i=1;i<=c;i++)
    {
        i=b+a;
        a=b;
        b=i;
        printf("%d,",i);
    }
    return 0;
}
     