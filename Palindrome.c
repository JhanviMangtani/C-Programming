#include<stdio.h>

int main()
{
int n,r;
printf("Enter number : \n");
scanf("%d",&n);

int c,rev=0;
c=n;

while(n>0)
{
    r=n%10;
    rev=(rev*10)+r;
    n=n/10;
}

printf("Reversed number is : \n%d\n",rev);
if(c==rev)
{
    printf("%d is a palindrome",c);
}
else
{
    printf("%d is not a palindrome",c);
}

return 0;

}
