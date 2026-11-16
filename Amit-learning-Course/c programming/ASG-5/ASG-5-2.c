//Write a program in C that performs the following steps:
//1.Prompts the user to enter 10 integer numbers.
//2.Finds the largest and smallest numbers in the array.
//3.Displays the largest number and the smallest number to the user

#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int largest, smallest;

    
    printf("Please enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    largest = arr[0];
    smallest = arr[0];

    
    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    
    printf("\n--- Results ---\n");
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}