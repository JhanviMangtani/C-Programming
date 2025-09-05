#include<stdio.h>

struct student
{
    char name[100];
    int age;
    int marks;
};

int main()
{
    struct student *s;
    printf("Enter student name :");
    scanf("%[^\n]",s->name);
    printf("Enter student age : \n");
    scanf("%d",&s->age);
    printf("Enter student marks : \n");
    scanf("%d",&s->marks);
    
    printf("Student details : \n");
    printf("Name : %s\n",s->name);
    printf("Age : %d\n",s->age);
    printf("Marks : %d\n",s->marks);

    return 0;

}