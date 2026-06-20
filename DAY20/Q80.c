// Write a program to Find colum-wise sum.

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

// Function to calculate and display the sum of each column
void column_sum(int r, int c, int a[r][c])
{
    // Traverse each column
    for (int i = 0; i < c; i++)
    {
        int column = 0; // Initialize sum for the current column

        // Traverse each row of the current column
        for (int j = 0; j < r; j++)
        {
            // Add the elements of the current column
            column += a[j][i];
        }

        // Display the sum of the current column
        printf("\nSum of Column %d = %d", i + 1, column);
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

    column_sum(r1, c1, arr);
    return 0;
}