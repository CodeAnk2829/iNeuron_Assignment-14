// Program to find the second largest element in an given array of size 10
#include <stdio.h>
int main()
{
    int a[10]; // Declaring an array of size 10
    int i, j, temp, SecondLargestElement;

    // Display Message
    printf("Enter ten numbers: ");

    // Taking inputs from the user
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &a[i]);
    }

    // Arrange the two greatest element at the last and the second last positions
    for(i = 1; i < 3; ++i){
        for(j = 0; j < 10 - i; ++j){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp; 
            }
        }
    }
    // Finding Second Largest Element in the given array
    SecondLargestElement = a[8];

    // Display the Second Largest element in the given array
    printf("Second Largest Element: %d", SecondLargestElement);

    return 0;
}