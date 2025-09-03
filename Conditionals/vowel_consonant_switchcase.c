#include<stdio.h>
  
int main()
{
char c;
printf("Enter any alphabet : \n");
scanf("%c",&c);

switch(c)
{
case 'a':
printf("%c is a vowel\n",c);
break;

case 'e':
printf("%c is a vowel\n",c);
break;

case 'i':
printf("%c is a vowel\n",c);
break;

case 'o':
printf("%c is a vowel\n",c);
break;

case 'u':
printf("%c is a vowel\n",c);
break;

default:
 ("%c is a consonant\n",c);
}

return 0;
}
