//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;     // Get last digit
        sum = sum + rem;    // Add it to sum
        num = num / 10;     // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}

