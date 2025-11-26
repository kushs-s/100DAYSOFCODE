/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Read matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Total number of diagonals = n + m - 1
    for(int d = 0; d < n + m - 1; d++) {

        // If diagonal number is even → go bottom to top
        if(d % 2 == 0) {
            int row = (d < n) ? d : n - 1;
            int col = d - row;

            while(row >= 0 && col < m) {
                printf("%d ", a[row][col]);
                row--;
                col++;
            }
        }
        // If diagonal number is odd → go top to bottom
        else {
            int col = (d < m) ? d : m - 1;
            int row = d - col;

            while(col >= 0 && row < n) {
                printf("%d ", a[row][col]);
                row++;
                col--;
            }
        }
    }

    return 0;
}
