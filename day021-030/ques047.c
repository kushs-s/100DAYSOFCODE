/*
//Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {       // Rows
        for(j = 1; j <= i; j++) {   // Columns increase with row number
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
