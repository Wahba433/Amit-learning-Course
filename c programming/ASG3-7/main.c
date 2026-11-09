
//Aprogram that Display Fibonacci Sequence Using the Recursion Method and iterative Method.

#include <stdio.h>


void printFibonacciIterative(int n) {
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series (Iterative): ");
    for (int i = 1; i <= n; ++i) {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

long long fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}


void printFibonacciRecursive(int n) {
    printf("Fibonacci Series (Recursive): ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", fibonacciRecursive(i));
    }
    printf("\n");
}

int main() {
    int n;


    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }


    printFibonacciIterative(n);


    printFibonacciRecursive(n);

    return 0;
}
