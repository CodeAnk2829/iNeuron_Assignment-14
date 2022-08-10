// Program to copy the elements of one array into another array
#include <stdio.h>
int main(){
    int a[10], b[10];
    int i, temp;

    // Display Message for user
    printf("Enter ten numbers: ");

    for(i = 0; i < 10; ++i){
        scanf("%d", &a[i]); // Taking elements as input from the user

        // Copying the values of the array a[10] into array b[10]
        b[i] = a[i];
    }

    // Display the copied elements of the array b[10]
    for(i = 0; i < 10; ++i){
        printf("%d ", b[i]);
    }
    return 0;
}