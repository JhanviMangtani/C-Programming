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

    int key;
    printf("Enter element to be found : \n");
    scanf("%d", &key);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                printf("Element found at row %d and column %d", i, j);
                break;
            }
        }
    }

    return 0;
}
