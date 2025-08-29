#include<stdio.h>
#include<string.h>

int main()
{

char str1[30],str2[30];
printf("Enter the first string : \n");
gets(str1);

printf("Enter the second string : \n");
gets(str2);
strcat(str1,str2);

printf("The first string is : \n");
puts(str1);

printf("The second string is : \n");
puts(str2);

return 0;

}
