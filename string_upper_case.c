#include <stdio.h>
#include <string.h>

int main() 
{
   char s[100];
   int i,n;

   printf("Enter a string : ");
   gets(s);

   n=strlen(s);

   for(i=0;i<n;i++)
   {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i] = s[i] - 32;
        }
   }

   printf("String in Upper Case = %s", s);

   return 0;

}