Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each character and convert
    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully! Check output.txt");

    return 0;
}
