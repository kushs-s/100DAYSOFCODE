/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    // Read matrix A dimensions
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];
    
    // Read matrix A
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B dimensions
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];
    
    // Read matrix B
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Result matrix C of size r1 × c2
    int C[r1][c2];

    // Initialize result matrix to 0
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            C[i][j] = 0;

    // Multiply A and B
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
