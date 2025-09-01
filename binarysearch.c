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
    int i,j,temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
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

    int target;
    printf("Enter element to be found : \n");
    scanf("%d", &target);

    int low = 0, high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == target)
        {
            printf("Target found at %d", mid);
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else if (a[mid] > target)
        {
            high = mid++;
        }
    }

    if (low > high)
    {
        printf("Target element not found \n");
    }
    return 0;
}

