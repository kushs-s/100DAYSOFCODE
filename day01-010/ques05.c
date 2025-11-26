// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float cl , ft ;

    printf("Enter temperature in Celsius.\n");
    scanf("%f" , &cl );
    ft = cl * 1.8 + 32;
    printf("Temperature in farhenheit is. %.2f\n" , ft );
    return 0;
}