#include <stdio.h>

int main() {
    // Item information
    char item1[] = "Item 1";
    char item2[] = "Item 2";
    char item3[] = "Item 3";
    double price1 = 10.0;
    double price2 = 15.0;
    double price3 = 20.0;
    int quantity1 = 2;
    int quantity2 = 3;
    int quantity3 = 1;

    // Calculate total prices for each item
    double total1 = price1 * quantity1;
    double total2 = price2 * quantity2;
    double total3 = price3 * quantity3;

    // Calculate the subtotal and total
    double subtotal = total1 + total2 + total3;
    double tax = subtotal * 0.08; // 8% tax rate
    double total = subtotal + tax;

    // Print the receipt
    printf("Item        Quantity  Price/Item  Total\n");
    printf("--------------------------------------\n");
    printf("%-12s %-8d $%-10.2lf $%-8.2lf\n", item1, quantity1, price1, total1);
    printf("%-12s %-8d $%-10.2lf $%-8.2lf\n", item2, quantity2, price2, total2);
    printf("%-12s %-8d $%-10.2lf $%-8.2lf\n", item3, quantity3, price3, total3);
    printf("--------------------------------------\n");
    printf("Subtotal:                        $%.2lf\n", subtotal);
    printf("Tax (8%%):                        $%.2lf\n", tax);
    printf("Total:                           $%.2lf\n", total);

    return 0;
}

