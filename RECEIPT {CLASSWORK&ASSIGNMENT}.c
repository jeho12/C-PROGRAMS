// C PROGRAM TO GET THE OUTPUT OF RECIEPT OF THREE ITEMS GOTTEN FROM A SUPERMARKET  
// USING FGETS &  string manipulation functions #INCLUDE <STRING.H>.
// IBENYE JEHOSHAPHAT .T 
// MATRIC NUMBER: AUL/CMP/22/043
// FACULTY: FACULTY OF NATURAL AND APPLIED HEALTH SCIENCES
// DEPARTMENT : COMPUTER SCIENCE
// ASSIGNMENT / CLASSWORK


#include <stdio.h>
#include <string.h>

int main() 
{
    char item1[50]; 
    char item2[50]; 
    char item3[50];
    
    float price1; 
    float price2; 
    float price3;
    float total = 0.0;

    printf("Enter the name of Item 1: ");
    fgets(item1, 50, stdin);
    item1[strcspn(item1, "\n")] = '\0';

    printf("Enter the price of Item 1: ");
    scanf("%f", &price1);
    total += price1;

    printf("Enter the name of Item 2: ");
    getchar();  // Consume the newline character left in the input buffer
    fgets(item2, 50, stdin);
    item2[strcspn(item2, "\n")] = '\0';

    printf("Enter the price of Item 2: ");
    scanf("%f", &price2);
    total += price2;

    printf("Enter the name of Item 3: ");
    getchar();  // Consume the newline character left in the input buffer
    fgets(item3, 50, stdin);
    item3[strcspn(item3, "\n")] = '\0';

    printf("Enter the price of Item 3: ");
    scanf("%f", &price3);
    total += price3;

    printf("\n************ AUL Supermarket Receipt ************\n");
    printf("\n+---------------------------------------------------+\n");
    printf("\n************ JEHO'S RECIEPT OF GOODS BOUGHT ********\n");
    printf("|      Item Name      |      Price (USD)     |\n");
    printf("+---------------------------------------------------+\n");
    printf("| %-20s | $%.2f              |\n", item1, price1);
    printf("| %-20s | $%.2f              |\n", item2, price2);
    printf("| %-20s | $%.2f              |\n", item3, price3);
    printf("+---------------------------------------------------+\n");
    printf("|      Total          | $%.2f              |\n", total);
    printf("+---------------------------------------------------+\n");

    return 0;
}

