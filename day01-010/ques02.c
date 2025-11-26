#include <stdio.h>

int main() {
    printf("Enter letter to choose operation:\n");
    printf("a for addition\ns for subtraction\nm for multiplication\nd for division\n");

    char choice;
    scanf(" %c", &choice);

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch (choice) {
        case 'a': {
            int sum = a + b;
            printf("The sum is %d\n", sum);
            break;
        }
        case 's': {
            int difference = a - b;
            printf("The difference is %d\n", difference);
            break;
        }
        case 'm': {
            int product = a * b;
            printf("The product is %d\n", product);
            break;
        }
        case 'd': {
            if (b != 0) {
                float quotient = (float)a / b;
                printf("The quotient is %.2f\n", quotient);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        }
        default:
            printf("Invalid choice! Please enter a, s, m, or d.\n");
    }
    return 0;
}
