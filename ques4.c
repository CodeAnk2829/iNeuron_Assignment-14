// Program to find the greatest element stored in an array of size 10
#include <stdio.h>
int main(){
    int a[10]; // Declaring an array of size 10
    int i, max_element;

    // Display Message
    printf("Enter ten numbers: ");

    // Taking inputs from the user
    for(i = 0; i < 10; ++i){
        scanf("%d", &a[i]);
    }

    // Finding greatest element in the array
    max_element = a[0];

    for(i = 0; i < 10; ++i){
        if(max_element < a[i]){
            max_element = a[i];
        }
    }

    // Display the greatest element in the given array
    printf("Greatest Element: %d", max_element);

    return 0;
}