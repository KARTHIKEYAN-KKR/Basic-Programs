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

/* Sample Output: 1

Enter the number of rows: 4

Enter the number of columns: 4

Enter the elements to form the matrix
10 20 30 40
20 10 10 50
10 10 10 23
12 23 45 67
The sum of the matrix except border elements is : 40

Sample Output: 2

Enter the number of rows: 3

Enter the number of columns: 4

Enter the elements to form the matrix
20 10 10 20
25 10 10 40
50 20 20 20
The sum of the matrix except border elements is : 20


*/
