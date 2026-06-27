#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choice;
    int quantity;
    int deposit;
    int total;
    int returnedammount;
    char again;

    again = 'Y';

    while (again == 'Y' || again == 'y')
    {
        printf("\n===============================\n");
        printf("     WELCOME TO VENDING MACHINE\n");
        printf("===============================\n");

        printf("What would you like to buy?\n\n");

        printf("1. Coke     - Rs.40\n");
        printf("2. Pepsi    - Rs.35\n");
        printf("3. Chips    - Rs.20\n");
        printf("4. Biscuit  - Rs.15\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("\nThank you for using the Vending Machine!\n");
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice)
        {
        case 1:
            total = 40 * quantity;
            break;

        case 2:
            total = 35 * quantity;
            break;

        case 3:
            total = 20 * quantity;
            break;

        case 4:
            total = 15 * quantity;
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
            continue;
        }

        printf("\nTotal Amount = Rs.%d\n", total);

        printf("Enter deposit amount: ");
        scanf("%d", &deposit);

        if (deposit >= total)
        {
            returnedammount = deposit - total;

            printf("\nPurchase Successful!\n");
            printf("Change Returned = Rs.%d\n", returnedammount);
        }
        else
        {
            printf("\nInsufficient Balance!\n");
            printf("Please insert sufficient money.\n");
        }

        printf("\nDo you want to buy another product? (Y/N): ");
        scanf(" %c", &again);
    }

    printf("\nTHANK YOU ^_^\n");
    printf("\NYOU HAVE GREAT DAY ^_^\N");

    return 0;
}