#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2, result;

    while(1) {
        printf("\nCalculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Square root\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if(num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Square root of negative number is not allowed.\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                exit(1);
            default:
                printf("Error: Invalid choice. Please enter a number between 1 and 6.\n");
                abort();
        }
    }

    return 0;
}
