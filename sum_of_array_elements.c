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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of array elements %d", sum);
    return 0;
}
