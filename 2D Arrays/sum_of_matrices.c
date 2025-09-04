#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter number of rows :\n");
    scanf("%d", &m);

    printf("Enter number of columns :\n");
    scanf("%d", &n);

    int mat1[m][n];
    int i, j;
    printf("Enter first matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("The first matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    int mat2[m][n];
    printf("Enter matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("The second matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    int mat3[m][n];
    printf("The resultant matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}
