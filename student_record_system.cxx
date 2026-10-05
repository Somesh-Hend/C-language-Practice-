//​student_record_system
#include <stdio.h>
int main(){
    int age;
    char name[50];
    float marks;
    
    printf("Enter Your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter Your marks:");
    scanf("%f",&marks);
    printf("\nStudent Information-----\n");
    printf("name:%s\n",name);
    printf("age:%d\n",age);
    printf("marks:%f\n",marks);
    return 0;
}
