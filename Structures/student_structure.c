#include<stdio.h>

struct student
{
    char name[100];
    int age;
    int marks;
}st;

int main()
{
    printf("Enter student name :");
    scanf("%[^\n]",st.name);
    printf("Enter student age : \n");
    scanf("%d",&st.age);
    printf("Enter student marks : \n");
    scanf("%d",&st.marks);
    
    printf("Student details : \n");
    printf("Name : %s\n",st.name);
    printf("Age : %d\n",st.age);
    printf("Marks : %d\n",st.marks);

    return 0;

}