//Write a program to take two complex numbers from user then adding them using struct //


#include <stdio.h>


struct Complex
{
    float real;
    float imaginary;
};

int main()
{

    struct Complex num1, num2, sum;


    printf("For 1st complex number\n");

    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &num1.real, &num1.imaginary);


    printf("\nFor 2nd complex number\n");

    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &num2.real, &num2.imaginary);

    // Add real parts
    sum.real = num1.real + num2.real;

    // Add imaginary parts
    sum.imaginary = num1.imaginary + num2.imaginary;

    // Print the result
    printf("\nSum = %.1f + %.1fi\n",sum.real, sum.imaginary);


    return 0;
}
