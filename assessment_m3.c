#include <stdio.h>
main() 
{

    
    char choice;
    int quantity,bill = 0,price;
    int totalAmount = 0;

    do {
    	
    printf("Menu:\n");
    printf("1. Pizza    price = 180rs/pcs\n");
    printf("2. Burger   price = 100rs/pcs\n");
    printf("3. Dosa     price = 120rs/pcs\n");
    printf("4. Idli     price = 50rs/pcs\n");

        printf("Please enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
				price = 180;
                break;
            case '2':
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                price = 100;
                break;
            case '3':
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                price = 120;
                break;
            case '4':
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                price = 50;
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }

        totalAmount = price*quantity;
        printf("Total Amount is = %d\n",totalAmount);
        bill +=totalAmount;
        printf("Total bill is = %d\n",bill);
        
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you! Your final bill is %d.\n", totalAmount);

    return 0;
}
