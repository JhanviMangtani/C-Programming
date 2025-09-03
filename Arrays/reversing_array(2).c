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

    int temp;
    printf("Reversed array is : \n");
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[n - i - 1];
        a[n - i - 1] = a[i];
        a[i] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
