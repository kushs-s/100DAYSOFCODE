Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (scanf("%999s", s) != 1) return 0;  // reads a token (no spaces)

    int n = strlen(s);
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;  // -1 means not seen

    int maxLen = 0;
    int start = 0; // window start index

    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];

        // if current character was seen inside the current window,
        // move start to one past its last occurrence
        if (last[c] >= start) {
            start = last[c] + 1;
        }

        last[c] = i;                    // update last seen index
        int currLen = i - start + 1;    // current window length
        if (currLen > maxLen) maxLen = currLen;
    }

    printf("%d", maxLen);
    return 0;
}
