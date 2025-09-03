#include<stdio.h>

void prime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("The number %d is not prime",num);
            break;
        }
        
    }
    if(i==num)
    {
        printf("The number %d is prime",num);
    }
}

int main()
{

    int a;
    printf("Enter any number: \n");
    scanf("%d",&a);

    prime(a);

    return 0;
}