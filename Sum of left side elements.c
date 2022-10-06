#include <stdio.h>
int main()
{
    // Initialize and get the input of number of elements in the array.
    printf("Enter the number of elements in the array : ");
    
    int n;
    scanf("%d",&n);
    // Initialize the 1-D Array.
    int arr[100];
    // Get the 1-D Array Input from the user.
    printf("\n");
    printf("Enter the elements to form a 1-D array : ");
    printf("\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Initialize the sum as zero.
    int sum = 0;
    // Find the sum of all the elements present to the left of each element.
    printf("Sum of all the elements present to the left of each element : ");
    printf("\n");
    for(int i=0 ; i<n ; i++)
    {
        if(i==0)
        {
            sum =0;
            printf("%d ",sum);
        }
        else
        {
            sum = sum + arr[i-1];
            printf("%d ",sum);
        }
    }

    return 0;
}

/* Sample Output: 1

Enter the number of elements in the array : 5

Enter the elements to form a 1-D array : 
2 4 6 8 10
Sum of all the elements present to the left of each element : 
0 2 6 12 20 

Sample Output: 2

Enter the number of elements in the array : 7

Enter the elements to form a 1-D array : 
4 8 12 16 20 24 28
Sum of all the elements present to the left of each element : 
0 4 12 24 40 60 84 


*/
