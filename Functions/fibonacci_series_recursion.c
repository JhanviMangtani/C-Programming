#include<stdio.h>

int fib(int num)
{
    if(num==1)
    {
        return 0;
    }
    if(num==2)
    {
        return 1;
    }
    else
    {
        return fib(num-1)+fib(num-2);
    }
}

int main()
{
    int a;
    printf("Enter the amount of numbers needed from the fibonacci series : \n");
    scanf("%d",&a);

    int i;
    printf("The fibonacci series is : \n");
    for(i=1;i<=a;i++)
    {
        printf("%d\n",fib(i));
    }
    

    return 0;
}