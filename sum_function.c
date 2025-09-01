#include<stdio.h>

int sum(int x ,int y)
{
    int s=x+y;
    return s;
}

int main()
{
    int a,b;
    printf("Enter two integers: \n");
    scanf("%d %d",&a,&b);

    int c=sum(a,b);
    printf("Sum of the two numbers is : \n%d",c);

    return 0;
}