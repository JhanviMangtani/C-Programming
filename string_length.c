#include<stdio.h>
#include<string.h>

int main()
{
char str[100];

printf("Enter the string : \n");
gets(str);

int n;
n=strlen(str);
printf("Length of the string is %d",n);

return 0;

}