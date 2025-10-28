/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;

    // 1st section (1 star)
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= i; j++)
            printf("*\n");
        printf("\n"); // blank line between sections
    }

    // 2nd section (3 stars)
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 3rd section (5 stars)
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // 4th section (3 stars)
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 5th section (1 star)
    for (i = 1; i <= 1; i++) {
        printf("*\n");
    }

    return 0;
}
