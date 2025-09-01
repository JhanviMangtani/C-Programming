#include <stdio.h>

int main()
{
    int n;
    printf("Enter length of array \n");
    scanf("%d", &n);
    int a[n];
    
    printf("Input array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
