#include<stdio.h>
 
int main()
{
int n,r;
printf("Enter number : \n");
scanf("%d",&n);

int sum=0;

printf("Sum of digits of number are : \n");
while(n>0)
{
    r=n%10;
    sum=sum+r;
    n=n/10;
}
printf("%d",sum);

return 0;
}
