// c program to generate a receipt of 3 items bought from a supermarket

#include <stdio.h>

int main() 
{
    // Declare variables to store item details
    char item1[50]; 
	char item2[50]; 
	char item3[50];
	
    float price1; 
	float price2; 
	float price3;
    float total = 0.0;

    // Prompt the user to enter details for each item
    printf("Enter the name of Item 1 : ");
    fgets(item1, sizeof(item1), stdin);
    printf("Enter the price of Item 1: ");
    scanf("%f", &price1);
    total += price1;

    printf("Enter the name of Item 2 : \n");
    fgets(item2, sizeof(item2), stdin);
    printf("Enter the price of Item 2: \n");
    scanf("%f", &price2);
    total += price2;

    printf("Enter the name of Item 3 \n: ");
    fgets(item3, sizeof(item3), stdin);
    printf("Enter the price of Item 3: ");
    scanf("%f", &price3);
    total += price3;

    // Display the receipt
    printf("\n************ AUL Supermarket Receipt ************\n");
    printf("\n...............JEHO'S GOODS& CUSTOMERS BUYING RECEIPT..................\n");
    printf("Item 1: %s - $%.2f\n", item1, price1);
    printf("Item 2: %s - $%.2f\n", item2, price2);
    printf("Item 3: %s - $%.2f\n", item3, price3);   
    printf("--------------------------------------------\n");
    printf("Total: $%.2f\n", total);
    printf("********************************************\n");

    return 0;
}

