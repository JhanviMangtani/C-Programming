#include<stdio.h>

int main()
{
    int a,*p;
    printf("Enter any integer :\n");
    scanf("%d",&a);

    p=&a;
    printf("a= %d\n",a);
    printf("Address of a= %d\n",&a);
    printf("p= %d\n",p);
    printf("*p= %d\n",*p);

    return 0;

}