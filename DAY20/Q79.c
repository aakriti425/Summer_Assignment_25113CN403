// Write a program to Find row-wise sum.

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

// Function to calculate and display the sum of each row
void row_sum(int r, int c, int a[r][c])
{
    // Traverse each row
    for (int i = 0; i < r; i++)
    {
        int sum = 0; // Initialize sum for the current row

        // Add all elements of the current row
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }

        // Display the sum of the current row
        printf("\nSum of Row %d = %d", i + 1, sum);
    }
}

void row_sum(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        printf("\nSum of %d row = %d", i + 1, sum);
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

    row_sum(r1, c1, arr);
    return 0;
}