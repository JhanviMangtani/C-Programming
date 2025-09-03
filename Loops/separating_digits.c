#include<stdio.h>

int main()
{
int n,r;
printf("Enter number : \n");
scanf("%d",&n);

printf("Digits of number are : \n");
while(n>0)
{
    r=n%10;
    printf("%d\n",r);
    n=n/10;
}

return 0;
}
