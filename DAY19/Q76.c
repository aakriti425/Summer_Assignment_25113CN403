//  Write a program to Find diagonal sum.

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

void matrix_transpose(int r1, int c1, int a[r1][c1])
{
    int dsum = 0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (i == j || i + j == r1 - 1)
            {
                dsum += a[i][j];
            }
        }
    }
    printf("\nDiagonal Sum : %d ",dsum);
}

int main()
{
    int r1, c1;
    printf("Enter no of Rows and column of Matrix : ");
    scanf("%d %d", &r1, &c1);
    int arr[r1][c1];

    array_input(r1, c1, arr);
    array_display(r1, c1, arr);

    matrix_transpose(r1, c1, arr);
    return 0;
}