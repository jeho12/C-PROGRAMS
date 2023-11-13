#include <stdio.h>

int main() {
    // Declare variables to store item details
    char items[3][50];
    float prices[3];
    float total = 0.0;

    // Prompt the user to enter details for each item
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of Item %d: ", i + 1);
        fgets(items[i], sizeof(items[i]), stdin);
        printf("Enter the price of Item %d: ", i + 1);
        scanf("%f", &prices[i]);
        getchar(); // Consume the newline character left in the input buffer
        total += prices[i];
    }

    // Display the receipt
    printf("\n************ AUL Supermarket Receipt ************\n");
    printf("Item Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Item %d: %s - $%.2f\n", i + 1, items[i], prices[i]);
    }
    printf("--------------------------------------------\n");
    printf("Total: $%.2f\n", total);
    printf("********************************************\n");

    return 0;
}

