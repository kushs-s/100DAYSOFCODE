Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);

    // Edge cases
    if (k <= 0 || k > n) {
        // invalid window size
        printf("0");
        return 0;
    }

    long long windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    long long maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i];
        windowSum -= arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%lld", maxSum);
    return 0;
}
