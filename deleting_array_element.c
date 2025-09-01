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

int i,loc;
printf("Enter location from which you want to delete the element : \n");
scanf("%d",&loc);

for(i=loc;i<n;i++)
{
a[i]=a[i+1];
}
n--;

printf("Updated array is : \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

return 0;

}
