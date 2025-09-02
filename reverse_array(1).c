#include <stdio.h>
 //Revering array and storing it in another array
int main()
{
    int n;
    printf("Enter length of array \n");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Input array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[n - i - 1] = a[i];
    }

    printf("Reversed array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}
