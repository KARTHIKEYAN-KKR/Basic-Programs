#include <stdio.h>

int main()
{
    // Initialize and get the input of number of elements in the array.
    printf("Enter the number of elements in the array : ");
    int n;
    scanf("%d",&n);
    // Initialize the 1-D Array.
    int arr[10000];
    // Get the 1-D Array Input from the user.
    printf("\n");
    printf("Enter the elements to form a 1-D array : ");
    printf("\n");
    for(int i=0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Left Right Odd count : ");
    printf("\n");
    for(int i=0 ; i<n ; i++)
    {
        int count1=0;//Initialize count1 as zero to count the odd elements by traversing right side.
        int count2=0;// Initialize count2 as zero to count the odd elements by traversing left side.
        // Traversing Right side.
        for(int j=i+1 ; j<n; j++)
        {
            if(arr[j]%2==1)
            {
                count1++;
            }
        }
        // Traversing Left Side.
        for(int k=i-1 ; k>=0 ; k--)
        {    
            if(arr[k]%2==1)
            {
                count2++;
            }
        }
        if(count1==count2)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            printf("-1 ");
        }
    }

    return 0;
}

/* Sample Output : 1

Enter the number of elements in the array : 6

Enter the elements to form a 1-D array : 
1 3 4 8 5 7
Left Right Odd count : 
-1 -1 4 8 -1 -1 

Sample Output : 2

Enter the number of elements in the array : 4

Enter the elements to form a 1-D array : 
1 4 3 8
Left Right Odd count : 
-1 4 -1 -1 

*/
