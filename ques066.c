/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n + 1];  // one extra space for new element
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x); // element to insert

    int i = n - 1;

    // Shift elements to right until correct position found
    while(i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = x; // insert element
    n++;            // size increases

    // Print final array
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
