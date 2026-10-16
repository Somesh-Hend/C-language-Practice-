// Leap Year Identifier programme
#include <stdio.h>
int main( ){
    int year,z,y,x;
    printf("Wellcome To Leap Year Finding Code");
    printf("Enter Year:");
    scanf("%d",&year);
    z=year%4;
    y=year%100;
    x=year%400;
    if ((z == 0 && y != 0) || (x == 0))
    {
        printf("It is an Leap Year");
    }
    else
    {
    printf("It is not an leap year");
    }
}