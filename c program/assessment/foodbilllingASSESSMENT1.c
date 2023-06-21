#include <stdio.h>
int main() {
    // Food items available with their prices
    int burger = 50;
    int pizza = 100;
    int fries = 30;
    int coke = 20;
    int idlidosa = 150;
    
    // Variables to keep track of selected items and total bill
    float totalBill = 0.0;
    char choice;
    printf("Welcome to the Food Billing System\n");
    printf("Food Items Available:\n");
    printf("1. Burger - %d\n", burger);
    printf("2. Pizza - %d\n", pizza);
    printf("3. Fries - %d\n", fries);
    printf("4. Coke - %d\n", coke);
    printf("5. idli dosa - %d\n", idlidosa);
    do {
        int item,quantity;
        int price = 0;

        printf("\nEnter the item number: ");
        scanf("%d", &item);
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        // Calculate the price based on the selected item and quantity
        switch (item) {
            case 1:
                price = burger * quantity;
                break;
            case 2:
                price = pizza * quantity;
                break;
            case 3:
                price = fries * quantity;
                break;
            case 4:
                price = coke * quantity;
                break;
            case 5:
                price = idlidosa * quantity;
                break;
            default:
                printf("Invalid item number.\n");
                continue;
        }

        totalBill += price; // Add the price to the total bill

        printf("Item added to the bill. Total bill: %f\n", totalBill);

        printf("\nDo you want to select more items? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

  printf("Final Bill: %.2f\n", totalBill);

    return 0;
}

