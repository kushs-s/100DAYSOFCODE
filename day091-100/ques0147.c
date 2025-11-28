/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {

    struct Employee e, readEmp;

    // Input employee details
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    // --- Write to binary file ---
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File error!");
        return 1;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // --- Read from binary file ---
    fp = fopen("employee.dat", "rb");
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Output employee details
    printf("Employee Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f",
           readEmp.name, readEmp.id, readEmp.salary);

    return 0;
}
