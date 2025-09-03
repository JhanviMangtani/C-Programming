#include<stdio.h>

int fib(int num)
{
    int t1=0,t2=1,next,i;
    for(i=1;i<=num;i++)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return t2;
}

int main()
{
    int n;
    printf("Enter the term which you want :\n");
    scanf("%d",&n);
    
    printf("The term is : \n");
    int a=fib(n-2);
    printf("%d",a);

    return 0;
}