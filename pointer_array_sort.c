#include<stdio.h>

void sort(int *p, int n)
{
    printf("Sorted array :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if((*(p+j))>(*(p + j + 1)))
            {
                int temp=*(p+j);
                *(p+j)=*(p + j + 1);
                *(p + j + 1)=temp;
            }
        }
    }


for(int i=0;i<n;i++)
{
    printf("%d\n",*(p+i));
}
}

int main()
{
    int n;
    printf("Enter length of array : \n");
    scanf("%d",&n);
    int a[n];

    printf("Input array :\n");
    for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

sort(a,n);
return 0;

}