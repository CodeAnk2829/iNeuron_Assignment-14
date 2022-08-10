// Program to find the Smallest element stored in an array of size 10
#include <stdio.h>
int main()
{
    int a[10]; // Declaring an array of size 10
    int i, min_element;

    // Display Message
    printf("Enter ten numbers: ");

    // Taking inputs from the user
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &a[i]);
    }

    // Finding Smallest element in the array
    min_element = a[0];

    for (i = 0; i < 10; ++i)
    {
        if (min_element > a[i])
        {
            min_element = a[i];
        }
    }

    // Display the Smallest element in the given array
    printf("Smallest Element: %d", min_element);

    return 0;
}