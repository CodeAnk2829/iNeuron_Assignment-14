// Program to sort an array of size 10
#include <stdio.h>
int main(){
    int a[10]; // Declaring an array of size 10
    int i, j, temp;

    // Displaying Message
    printf("Enter ten numbers: ");

    // Taking inputs from the user
    for(i = 0; i < 10; ++i){
        scanf("%d", &a[i]);
    }

    // Sorting
    for(i = 1; i < 10; ++i){
        for(j = 0; j < 10 - i; ++j){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Displaying sorted array
    for(i = 0; i < 10; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}