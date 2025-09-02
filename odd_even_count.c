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
    
    int i, even = 0, odd = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd += 1;
        }
    }

    printf("Number of odd numbers are : %d \n", odd);
    printf("Number of even numbers are : %d", even);

    return 0;
}
