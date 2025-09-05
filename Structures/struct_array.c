#include<stdio.h>

struct teacher
{
    char name[100];
    int id;
    float salary;
};

int main()
{
    int n;
    printf("Enter number of teachers : \n");
    scanf("%d",&n);

    struct teacher th[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name:");
        scanf("%s",th[i].name);
        printf("Enter id : \n");
        scanf("%d",&th[i].id);
        printf("Enter salary : ");
        scanf("%f",&th[i].salary);
    }

    printf("The details are : \n");
    for(int i=0;i<n;i++)
    {
        printf("Name is %s\n",th[i].name);
        printf("Id is %d\n",th[i].id);
        printf("Salary is %.2f\n",th[i].salary);
    }

    return 0;

}