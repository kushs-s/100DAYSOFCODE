Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Months {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[10];
    scanf("%s", input);

    enum Months m;

    if (strcmp(input, "JAN") == 0) m = JAN;
    else if (strcmp(input, "FEB") == 0) m = FEB;
    else if (strcmp(input, "MAR") == 0) m = MAR;
    else if (strcmp(input, "APR") == 0) m = APR;
    else if (strcmp(input, "MAY") == 0) m = MAY;
    else if (strcmp(input, "JUN") == 0) m = JUN;
    else if (strcmp(input, "JUL") == 0) m = JUL;
    else if (strcmp(input, "AUG") == 0) m = AUG;
    else if (strcmp(input, "SEP") == 0) m = SEP;
    else if (strcmp(input, "OCT") == 0) m = OCT;
    else if (strcmp(input, "NOV") == 0) m = NOV;
    else if (strcmp(input, "DEC") == 0) m = DEC;
    else {
        printf("Invalid month");
        return 0;
    }

    switch (m) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case NOV:
            printf("31 days");
            break;

        case APR: case JUN: case SEP: case DEC:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");
            break;
    }

    return 0;
}
