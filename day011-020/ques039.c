//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int num, rem;
    int product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;   // Get last digit
        if (rem % 2 != 0) {   // Check if odd
            product *= rem;
            hasOdd = 1;
        }
        num /= 10;   // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("Product of odd digits = 1 (no odd digits)\n");

    return 0;
}
