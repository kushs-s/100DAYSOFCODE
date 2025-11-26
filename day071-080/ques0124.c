Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *fsrc, *fdest;
    int ch;

    // Input filenames
    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    // Open source file in read mode
    fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    fdest = fopen(dest, "w");
    if (fdest == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(fsrc);
        return 1;
    }

    // Copy char-by-char
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }

    fclose(fsrc);
    fclose(fdest);

    printf("File copied successfully to %s", dest);

    return 0;
}

