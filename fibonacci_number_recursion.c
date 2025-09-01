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
    printf("Enter the position of the number you want form the fibonacci series : \n");
    scanf("%d",&a);

    int b=fib(a);
    printf("The number is : %d \n",b);

    return 0;
}