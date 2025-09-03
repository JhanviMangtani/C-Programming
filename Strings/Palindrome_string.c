#include<stdio.h>
#include<string.h>

int main()
{
char str1[30],str2[30];

printf("Enter the string : \n");
gets(str1);

int i,n;
n=strlen(str1);

for(i=0;i<=n;i++)
{
str2[n-i-1]=str1[i];
}

if(strcmp(str1,str2)==0)
{
printf("%s is a palindrome\n",str1);
}
else
{
printf("%s is not a palindrome\n",str1); 
}
return 0;
}
