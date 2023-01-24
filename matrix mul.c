#include <stdio.h>

void multiply(int a[][10], int b[][10], int c[][10], int m, int n, int p)
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, p, i, j;
    printf("Enter the number of rows of matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns of matrix A: ");
    scanf("%d", &n);
    printf("Enter the elements of matrix A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows of matrix B: ");
    scanf("%d", &n);
    printf("Enter the number of columns of matrix B: ");
    scanf("%d", &p);
    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    multiply(a, b, c, m, n, p);
    printf("Product of the matrices: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

