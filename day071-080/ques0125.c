Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    // Get file name
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  // consume leftover newline

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // Get text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
