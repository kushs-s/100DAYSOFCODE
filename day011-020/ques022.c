//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit %.2f%%\n", (amount / costPrice) * 100);
    }
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss %.2f%%\n", (amount / costPrice) * 100);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
