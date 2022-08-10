// Program to calculate average of 10 numbers stored in an array
#include <stdio.h>
int main(){
    int a[10]; // Declaring an array of size 10
    int i, sum = 0;
    float avg;

    //Display Message
    printf("Enter ten numbers: ");
    
    for(i = 0; i < 10; ++i){
        scanf("%d", &a[i]); // Taking input from the user
        sum += a[i]; // Calculating sum
    }

    // Calculating average of 10 numbers
    avg = sum / 10.0;

    // Display average
    printf("Average is %.2f", avg);
    return 0;
}