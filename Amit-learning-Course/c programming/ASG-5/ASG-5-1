//Write a program in C that performs the following steps:
//1. Prompts the user to enter 10 integer numbers.
//2. Calculates the average of these numbers.
//3. Displays the result (the average) to the user.

#include <stdio.h>

int main() {
    int i, num;
    int sum = 0;
    double average;


    printf("Please enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }


    average = (double)sum / 10.0;


    printf("\nThe average of the 10 numbers is: %.2f\n", average);

    return 0;
}