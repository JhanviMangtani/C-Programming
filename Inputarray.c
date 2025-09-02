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

printf("Entered array is : \n");
for(int i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

return 0;

}
