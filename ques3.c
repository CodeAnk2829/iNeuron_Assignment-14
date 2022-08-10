// Program to calculate sum of all EVEN numbers and all ODD numbers in a given array
#include <stdio.h>
int main(){
    int a[10]; // Declaring an array of size 10
    int i, EvenSum = 0, OddSum = 0; // Declaring variables for storing sum of even and odd numbers

    // Display Message 
    printf("Enter ten numbers: ");

    for(i = 0; i < 10; ++i){
        scanf("%d", &a[i]); // Taking input from the user

        // Calculating sum of even and odd numbers
        if(a[i] & 1){
            OddSum += a[i];
        }else{
            EvenSum += a[i];
        }
    }

    // Displaying the result
    printf("Sum of all EVEN numbers: %d\nSum of all ODD numbers: %d", EvenSum, OddSum);

    return 0;
}