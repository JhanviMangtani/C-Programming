#include<stdio.h>

int main() 
{
int num1,num2,temp1,temp2;
printf("Enter two numbers : \n");
scanf("%d %d",&num1 , &num2);

temp1=num1;
temp2=num2;

while(num2>0)
{
    int temp=num2;
    num2=num1%num2;
    num1=temp;
}

int hcf=num1;
int lcm=(temp1*temp2)/hcf;

printf("Hcf = %d\n",hcf);
printf("LCM = %d \n",lcm);
return 0;
}
