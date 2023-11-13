#include <stdio.h>

int main() {
    int num1, num2;
    int addition, subtraction, multiplication, modulos;
    float div;

    printf("Input first number: ");
    scanf("%d", &num1); // Input the first value
    printf("Input second number: ");
    scanf("%d", &num2); // Input the second value

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    modulos = num1 % num2;

    if (num2 != 0) {
        div = (float)num1 / num2; // Handle division by zero
        printf("The division of %d by %d is %.3f\n", num1, num2, div);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    printf("The sum of %d and %d is %d\n", num1, num2, addition);
    printf("The difference between %d and %d is %d\n", num1, num2, subtraction);
    printf("The product of %d and %d is %d\n", num1, num2, multiplication);
    printf("The modulus of %d by %d is %d\n", num1, num2, modulos);

    return 0;
}

