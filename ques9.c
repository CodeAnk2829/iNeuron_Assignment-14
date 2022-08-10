// Program in C to read n number of values in an array and display it in reverse order
#include <stdio.h>
int main(){
    int a[100]; // Declaring an array
    int n, i, temp;

    // Display Message for user
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);

    // Taking input from the user
    for(i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    
    // Reversing the elements of the given array
    for(i = 0; i < n/2; ++i){
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    // Display of the reverse elements of the given array
    for(i = 0; i < n; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}