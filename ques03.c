//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>

int main()
{
    printf("Name: Anurag kumar\nSaP ID:590028695\nCourse:BCA\nBatch:6\n");
    printf("--------------------------------------------------\n");
    int a, b;
    printf("enter value of length:");
    scanf("%d", &a);
    printf("enter value of breadth:");
    scanf("%d", &b);
    int perimeter = 2 * (a + b);
    int area = a * b;
    printf("area is %d\n", area);
    printf("the perimeter is %d\n", perimeter);
    return 0;

}
