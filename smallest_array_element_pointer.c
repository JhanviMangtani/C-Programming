#include<stdio.h>

int main()
{
    int *p,n;
    printf("Enter number of array elements : \n");
    scanf("%d",&n);

    int a[n],i;
    printf("Input array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    p=&a[0];
    int smallest=*p;
    for(i=0;i<n;i++)
    {
        if ((*p)>(*(p + 1)))
        {
            smallest=*(p + 1);
        }
        else if((*p)==(*(p + 1)))
        {
            smallest=*(p + 1);
        }
        p++;  
    }

    printf("The smallest array element is : \n%d",smallest);

    return 0;
    
}
