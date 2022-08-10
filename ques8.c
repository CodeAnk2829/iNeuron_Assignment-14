// Program to find the second smallest element in an array of size 10
#include <stdio.h>
int main()
{
    int a[10]; // Declaring an array of size 10
    int i, j, temp, SecondSmallestElement;

    // Display Message
    printf("Enter ten numbers: ");

    // Taking inputs from the user
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &a[i]);
    }

    // Arrange the two Smallest element at the last and the second last positions
    for (i = 1; i < 3; ++i)
    {
        for (j = 0; j < 10 - i; ++j)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Finding Second Smallest Element in the given array
    SecondSmallestElement = a[8];

    // Display the Second Smallest element in the given array
    printf("Second Smallest Element: %d", SecondSmallestElement);

    return 0;
}