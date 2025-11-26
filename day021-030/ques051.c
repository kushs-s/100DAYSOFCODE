/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main() {
    int n = 5;  // Total number of rows
    int i, j, space;

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = n - i; space > 0; space--)
            printf(" ");
        
        // Print numbers
        for (j = n - i + 1; j <= n; j++)
            printf("%d", j);
        
        printf("\n");
    }

    return 0;
}
