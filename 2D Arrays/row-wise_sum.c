#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter number of rows :\n");
    scanf("%d", &m);

    printf("Enter number of columns :\n");
    scanf("%d", &n);
    
    int mat[m][n];
    int i, j;

    printf("Enter matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The matrix is : \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    int sum = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + mat[i][j];
        }
        printf("Sum of elements of row %d is : %d \n", i + 1, sum);
        sum = 0;
    }

    return 0;
}
