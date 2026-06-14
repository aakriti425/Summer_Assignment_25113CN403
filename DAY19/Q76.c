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

void diagonal_sum(int r, int c, int a[r][c])
{
    int dsum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j || i + j == r - 1)
            {
                if (i == j && i + j == r - 1)
                    continue; 
                dsum += a[i][j];
            }
        }
    }
    printf("\nDiagonal Sum : %d ",dsum);
}

int main()
{
    int r, c;
    printf("Enter no of Rows and column of Matrix : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    array_input(r, c, arr);
    array_display(r, c, arr);

    diagonal_sum(r, c, arr);
    return 0;
}