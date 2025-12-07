#include <stdio.h>

// Function prototypes (pass by value)
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

// Function prototype (pass by reference)
void calculateAll(float a, float b, float *sum, float *diff, float *prod, float *quot);

int main() {
    float num1, num2;
    float result, sum, diff, prod, quot;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\n----- Calculator Menu -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. All operations (using pass by reference)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            result = subtract(num1, num2);
            printf("Subtraction = %.2f\n", result);
            break;

        case 3:
            result = multiply(num1, num2);
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            if(num2 == 0)
                printf("Error! Division by zero.\n");
            else {
                result = divide(num1, num2);
                printf("Division = %.2f\n", result);
            }
            break;

        case 5:
            calculateAll(num1, num2, &sum, &diff, &prod, &quot);
            printf("Addition = %.2f\n", sum);
            printf("Subtraction = %.2f\n", diff);
            printf("Multiplication = %.2f\n", prod);
            if(num2 != 0)
                printf("Division = %.2f\n", quot);
            else
                printf("Division = Error! Division by zero.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// ----- Functions (Pass by Value) -----
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

// ----- Function (Pass by Reference) -----
void calculateAll(float a, float b, float *sum, float *diff, float *prod, float *quot) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;

    if (b != 0)
        *quot = a / b;
}
