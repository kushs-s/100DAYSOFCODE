/*Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Only possible if square matrix
    if(n != m) {
        printf("False");
        return 0;
    }

    int freq[10000] = {0}; // assuming diagonal values are small (safe for test cases)

    // Check distinct diagonal elements
    for(int i = 0; i < n; i++) {
        int val = matrix[i][i];
        if(freq[val] == 1) {   // already seen before → not distinct
            printf("False");
            return 0;
        }
        freq[val] = 1;
    }

    printf("True");
    return 0;
}
