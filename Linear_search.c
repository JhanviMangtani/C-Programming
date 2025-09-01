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

    int i, key;
    printf("Enter element to be found : \n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at %d", i);
            break;
        }
    }

    if (i == n)
    {
        printf("Element not found ");
    }

    return 0;
    
}
