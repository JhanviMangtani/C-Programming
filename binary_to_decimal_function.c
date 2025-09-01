#include<stdio.h>

int bin(int num)
{
    int r,sum=0;
    int base=1;
    while(num>0)
    {
        r=num%10;
        sum+=base*r;
        num=num/10;
        base=base*2;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter binary number:\n");
    scanf("%d",&n);
    
    int a=bin(n);
    printf("The decimal conversion is : \n%d",a);

    return 0;
}