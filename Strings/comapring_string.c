#include<stdio.h>
#include<string.h>

int main()
{
char str1[30],str2[30];
printf("Enter the first string : \n");
gets(str1);

printf("Enter the second string : \n");
gets(str2);

if(strcmp(str1,str2)==0)
{
printf("Both the strings are equal\n");
}
else if(strcmp(str1,str2)>1)
{
printf("The first string (%s) is longer \n",str1);
}
else if(strcmp(str1,str2)<1)
{
printf("The second string (%s) is longer\n",str2);
}

printf("The first string is : \n");
puts(str1);

printf("The second string is : \n");
puts(str2);

return 0;

}
