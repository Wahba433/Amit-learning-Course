//1-Write a C Function that take an array and its size,
//return the max number
//2-Write a C Function that take an array and its size,
//return the min number. 

#include <stdio.h>


int findMax(int arr[], int size) {
    if (size <= 0) return -1;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int findMin(int arr[], int size) {
    if (size <= 0) return -1;
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int numbers[] = {23, 4, 67, 12, 89, 45, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Maximum number: %d\n", findMax(numbers, size));
    printf("Minimum number: %d\n", findMin(numbers, size));

    return 0;