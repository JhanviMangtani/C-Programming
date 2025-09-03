#include<stdio.h>

int main()
{
int n,r,count=0;
printf("Enter number : \n");
scanf("%d",&n);

printf("Number of digits in number are : \n");

while(n>0)
{
r=n%10;
count+=1;
n=n/10;
}

printf("%d",count);

return 0;
}
