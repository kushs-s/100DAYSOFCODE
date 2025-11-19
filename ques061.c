/*
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);  // element to search

    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;      // stop when found
        }
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
