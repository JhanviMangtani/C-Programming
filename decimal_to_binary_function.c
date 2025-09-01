#include<stdio.h>

int conv(int dec)
{
    int i=0;
    int a[10];
    while(dec>0)
    {
       a[i]=dec%2;
       dec=dec/2;
       i++; 
    }

    int b[10];
    for(int j=0;j<i;j++)
    {
        b[j]=a[i-j-1];
    }

    for(int j=0;j<i;j++)
    {
       printf("%d",b[j]);
    }

}

int main()
{
    int n;
    printf("Enter a decimal number : \n");
    scanf("%d",&n);

    printf("The binary conversion is : \n");
    conv(n);
    return 0;
}