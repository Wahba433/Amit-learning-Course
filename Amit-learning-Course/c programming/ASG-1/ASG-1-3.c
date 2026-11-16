//Write a program that take a number from user using scanf, lf the number was even print the following two sentences : “The number is odd = 0” “The number is even = 1” And if the number was odd print the following two sentences : “The number is odd = 1” “The number is even = 0” “The number is even .


#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number;

    printf("enter the number\n");
    scanf("%d", &number);

    printf("the number is odd = %d\n" , number & 1);
    printf("the number is even = %d\n" , !(number &1));
    return 0;
}