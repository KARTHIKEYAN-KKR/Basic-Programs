#include <stdio.h>

int main()
{
    // Initialize and Get the row and column as input from the user.
    int row, column;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("\n");
    printf("Enter the number of columns: ");
    scanf("%d",&column);
    // Initialize the 2-D Array.
    int arr[100][100];
    //Get the Matrix Input from the user.
    printf("\n");
    printf("Enter the elements to form the matrix");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // Initialize the sum as zero.
    int sum = 0;
    // Iterate row and columns except border elements and find their sum.
    for(int i=1 ; i<row-1 ; i++)
    {
        for(int j=1 ; j<column-1; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    // Print the sum
    printf("The sum of the matrix except border elements is : %d",sum);

    return 0;
}
