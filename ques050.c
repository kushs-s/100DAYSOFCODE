/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // Number of rows

    for(i = 0; i < n; i++) {                // Outer loop for rows
        for(space = 0; space < i; space++)  // Print leading spaces
            printf(" ");
        for(j = i; j < n; j++)              // Print stars
            printf("*");
        printf("\n");                       // New line after each row
    }

    return 0;
}
