/*
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n + 1];  // extra space for insertion
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, x;
    scanf("%d %d", &pos, &x);  
    // pos = index at which to insert

    // Shift elements to the right
    for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;  // insert element
    n++;           // increase size

    // Print array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
