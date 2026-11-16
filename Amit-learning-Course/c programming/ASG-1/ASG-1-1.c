// This program prompts the user to two enteger using scanf then performs (+;-,*,/)


#include <stdio.h>

int main() {
    int num1, num2;
    
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
   
    printf("Addition (%d + %d) = %d\n", num1, num2, num1 + num2);
    printf("Subtraction (%d - %d) = %d\n", num1, num2, num1 - num2);
    printf("Multiplication (%d * %d) = %d\n", num1, num2, num1 * num2);
    
    
    if (num2 != 0) {
        printf("Division (%d / %d) = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Division: Error (Division by zero is not allowed)\n");
    }
    
    return 0;
}