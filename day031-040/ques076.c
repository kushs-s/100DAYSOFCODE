/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    // If not square, cannot be symmetric
    if(n != m) {
        // Read input (to match format)
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        printf("False");
        return 0;
    }

    // Read matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetric condition
    int isSymmetric = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
