/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student s;        // normal structure
    struct Student *ptr;     // pointer to structure

    ptr = &s;                // point to s

    // Input using pointer and -> operator
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Output using pointer
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
