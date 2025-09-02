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

int i,key,loc;
printf("Enter number you want to insert : \n");
scanf("%d",&key);

printf("Enter location at which you want to insert the number : \n");
scanf("%d",&loc);

n=n+1;
for(i=n;i>loc;i--)
{
a[i]=a[i-1];
}
a[loc]=key;

printf("Updated array is : \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

return 0;

}
