#include<stdio.h>

int main()
{
int n,fact=1;
printf("Enter a number : \n");
scanf("%d",&n);

int c;
c=n;

for(c=n;c>0;c--)
{
    fact=fact*c;
}

printf("Factorial of %d is %d",n,fact);
return 0;
}
