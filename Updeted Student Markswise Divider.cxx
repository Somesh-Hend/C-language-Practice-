// Updeted Student Markswise Divider
#include <stdio.h>
int main( ){
    int a ;
    printf("Enter Your Marks Out of 100:");
    scanf("%d",&a);
    if (a>100)
    {
        printf("Enter Valid Marks");
    } else if(a>40){
        
        printf("You Are passed");
    } else
    {
        printf("You Are Failed");
    }
    return 0;
}