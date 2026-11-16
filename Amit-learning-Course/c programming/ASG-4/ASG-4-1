
// Write a program that asks you to enter
// a value of an integer variable x.
// Pass the address of x to a function called edit.
// Increment the value of x by 1 inside the function.
// Print the value of x in the main()
// function before and after calling the function edit.

#include <stdio.h>
#include <stdlib.h> 


void edit(int *ptr);

int main() {
    int x;

    
    printf("Enter the value of x\n");
    scanf("%d", &x);

    
    printf("Before calling edit x = %d\n", x);

    
    edit(&x);

   
    printf("After calling edit x = %d\n\n", x);

   
    int size = 3;
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr != NULL) {
        arr[0] = 5;
        arr[1] = 20;
        arr[2] = 80;

        printf("Stored numbers (+POINT):\n");
        for (int i = 0; i < size; i++) {
            printf("Element %d: %d\n", i + 1, arr[i]);
        }

       
        free(arr);
    }

    return 0;
}


void edit(int *ptr) {
    (*ptr)++;
}