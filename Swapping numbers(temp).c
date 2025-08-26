#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter first number as a \n");
    scanf("%d",&a);
    printf("enter second number as b\n");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("new number stored as a is %d\n",a);
    printf("number stored as b is %d\n ",b);
    
    return 0;

}
