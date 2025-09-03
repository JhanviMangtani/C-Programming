#include<stdio.h>

int main()
{

int n;
printf("Enter length of array \n");
scanf("%d",&n);
int a[n];

printf("Input array : \n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

int largest=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
  
}
printf("The largest array element is : %d \n",largest);

return 0;
}
