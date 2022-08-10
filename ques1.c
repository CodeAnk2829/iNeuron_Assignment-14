// Program to calculate the sum of all elements in an array of size 10
#include <stdio.h>
int main(){
    int a[10]; // Declaring an array of size 10
    int i, sum = 0;
    
    // Display message
    printf("Enter ten numbers: ");
    
    for(i = 0; i < 10; ++i){
        scanf("%d", &a[i]); // Taking User's input
        sum += a[i]; // Calculating sum
    }

    // Display of sum of all elements in the given array

    printf("Sum of all elements: %d", sum);

    return 0;
}