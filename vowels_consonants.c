#include<stdio.h>
#include <string.h>

int main()
{
char str[30];
printf("Enter the string : \n");
gets(str);

int i;
int n=strlen(str);
int v=0,c=0,s=0;

for(i=0;i<n;i++)
{
if(str[i]=='a'||str[i]=='A')
{
v++ ; 
}
else if(str[i]=='e'||str[i]=='E')
{
v++ ; 
}
else if(str[i]=='i'||str[i]=='I')
{
v++ ; 
}
else if(str[i]=='o'||str[i]=='O')
{
v++ ; 
}
else if(str[i]=='u'||str[i]=='U')
{
v++ ; 
}
else if(str[i]==' ')
{
s++ ;
}
else 
{
c++;
}
}

printf("No of vowels are : \n%d\n",v);
printf("No of consonants are : \n%d\n",c);
printf("No of spaces are : \n%d\n",s);

return 0;

}
