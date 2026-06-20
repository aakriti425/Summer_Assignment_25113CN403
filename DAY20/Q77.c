// Write a program to Multiply matrices.

#include <stdio.h>

void array_input(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void array_display(int r, int c, int arr[r][c])
{
    printf("\nMatrix \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d \t", arr[i][j]);
        }
        printf("\n");
    }
}

void matrix_multiply(int r1, int c1, int a[r1][c1], int r2, int c2, int b[r2][c2])
{
    if (c1 != r2)
    {
        printf("\nMultiplication not Possible");
    }
    else
    {
        int c[r1][c2];  // a[r1][c1] & b[r2][c2] == c[r1][c2]
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
            printf("\n");
        }
        printf("\nMatrix Multiplication \n");
        array_display(r1, c2, c);
    }
}

int main()
{
    int r1, c1;
    printf("Enter no of Rows and column of Matrix 1 : ");
    scanf("%d %d", &r1, &c1);
    int arr1[r1][c1];

    array_input(r1, c1, arr1);
    array_display(r1, c1, arr1);

    int r2, c2;
    printf("Enter no of Rows and column of Matrix 2 : ");
    scanf("%d %d", &r2, &c2);
    int arr2[r2][c2];

    array_input(r2, c2, arr2);
    array_display(r2, c2, arr2);

    matrix_multiply(r1, c1, arr1, r2, c2, arr2);
    return 0;
}