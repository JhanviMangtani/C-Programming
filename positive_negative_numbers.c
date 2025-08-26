#include<stdio.h>

int main()
{
int a,b;
printf("Enter two numbers : \n");
scanf("%d %d", &a, &b);

if(a>b)
{
printf("%d is larger \n",a);
}
else if(b>a)
{
printf("%d is larger\n",b);
}
else
{
printf("Both the numbers are equal\n");
}

return 0;
}
