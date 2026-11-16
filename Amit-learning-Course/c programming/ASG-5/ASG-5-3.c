
// Write a program that asks the user to enter
//  5 numbers and store it in an array called arr_1 
// using a for loop. Then print the following:
// Print the 5 elements of arr_1.
// The maximum number in arr_1 and its position in the array.
// The minimum number in arr_1 and its position in the array.


#include <stdio.h>

int main() {
    int arr_1[5];
    int i, j, temp;
    int max_val, min_val;
    int max_pos = 0, min_pos = 0;

 
    printf("Please enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    
    printf("\nThe 5 elements of arr_1 are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

   
    max_val = arr_1[0];
    min_val = arr_1[0];
    max_pos = 0;
    min_pos = 0;

    
    for (i = 1; i < 5; i++) {
        if (arr_1[i] > max_val) {
            max_val = arr_1[i];
            max_pos = i;
        }
        if (arr_1[i] < min_val) {
            min_val = arr_1[i];
            min_pos = i;
        }
    }

    
    printf("The maximum Number is %d in position %d\n", max_val, max_pos);

    
    printf("The minimum Number is %d in position %d\n", min_val, min_pos);

    
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr_1[j] > arr_1[j + 1]) {
               
                temp = arr_1[j];
                arr_1[j] = arr_1[j + 1];
                arr_1[j + 1] = temp;
            }
        }
    }

   
    printf("\nSorted array in ascending order (+POINT): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}
