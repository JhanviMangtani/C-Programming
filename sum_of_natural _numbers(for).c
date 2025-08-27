#include<stdio.h>

int main()
{
int n, sum=0;
printf("Enter number till which sum is needed\n");
scanf("%d",&n);
int i;

for(i=1;i<=n;i++)
{
    sum=sum+i;
}

printf("Sum of numbers is : %d",sum);

return 0;
}
