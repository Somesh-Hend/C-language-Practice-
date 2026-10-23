// Student Markswise Divider
#include <stdio.h>
int main( ){
    int a ;
    printf("Enter Your Marks Out of 100:");
    scanf("%d",&a);
    if (a<=40)
    {
        printf("Your Are Fail");
    } else 
    {
        printf("You Are Passed");
    }
    return 0;
}