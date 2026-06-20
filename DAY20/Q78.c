// Write a program to Check symmetric matrix.

// A symmetric matrix is a square matrix whose transpose is equal to the matrix itself.

// A^T=A

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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d \t", arr[i][j]);
        }
        printf("\n");
    }
}

void symmetric_matrix(int r, int c, int a[r][c])
{
    if (r != c)
    {
        printf("\nMatrix can not be a Symmetric \n");
    }
    else
    {
        int sym = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    sym = -1;
                    break;
                }
            }
        }
        if (sym == 1)
        {
            printf("\nMatrix is Symmetric\n");
        }
        else
        {
            printf("\nMatrix is not Symmetric\n");
        }
    }
}

int main()
{
    int r1, c1;
    printf("Enter no of Rows and column of Matrix : ");
    scanf("%d %d", &r1, &c1);
    int arr[r1][c1];

    array_input(r1, c1, arr);

    printf("\nMatrix \n");
    array_display(r1, c1, arr);

    symmetric_matrix(r1, c1, arr);
    return 0;
}