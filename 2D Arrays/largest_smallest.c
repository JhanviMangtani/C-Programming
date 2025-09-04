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

    int largest = mat[0][0];
    int smallest = mat[0][0];
    int temp1, temp2;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] > largest)
            {
                largest = mat[i][j];
            }
            else if (mat[i][j] < smallest)
            {
                smallest = mat[i][j];
            }
        }
    }

    printf("Largest element of matrix is : %d\n", largest);
    printf("Smallest element of matrix is : %d\n", smallest);

    return 0;
}
