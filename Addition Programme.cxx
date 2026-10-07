//Addition Programme
#include <stdio.h>
int main(){
    int Number,Number1,result;
    char sign ;
    printf("Enter First Number:");
    scanf("%d",&Number);
    printf("Enter sign(+):");
    scanf(" %c",&sign);
    printf("Enter Second Number:");
    scanf("%d",&Number1);
    printf("\n-----Result----\n");
    result=Number+Number1;
    printf("%d\n",result);
    return 0;
}