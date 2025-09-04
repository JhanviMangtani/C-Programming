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

    int temp;

    for (i = 0; i < m; i++)
    {
        for (int pass = 0; pass < n - 1; pass++)
        {
            for (j = 0; j < n - pass - 1; j++)
            {
                if (mat[i][j] > mat[i][j + 1])
                {
                    temp = mat[i][j];
                    mat[i][j] = mat[i][j + 1];
                    mat[i][j + 1] = temp;
                }
            }
        }
    }

    printf("The sorted matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
