#include<stdio.h>

int main()
  
{
    
int a;
printf("Enter marks out of 100 : \n");
scanf("%d",&a);

if(a>=90)
{
printf("Grade received : A+");
}
else if (a<90 && a>=75)
{
printf("Grade received : A");
}
else if(a<75 && a>=60)
{
printf("Grade received : B") ;
}
else if (a<60 && a>=50)
{
printf("Grade received : C");
}
else if (a<50 && a>=35 )
{
printf("Grade received : D");
}
else
{
printf("Student has failed");
}

return 0;
}
