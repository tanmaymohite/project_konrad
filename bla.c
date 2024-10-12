#include <stdio.h>

void main() {
    int choice, bill = 0, quantity;

    do {
        printf("\n-----------------KONRAD - BY HILTON--------------------\n");
        printf("\nSTARTER: ");
        printf("\n\n 1. Sandwich (80)\n 2. Poha (50)\n 3. Idli (70)\n 4. Exit\n");
        printf("\nMAIN COURSE:\n");
        printf("\n5. Veg Kolhapuri (240)\n6. Paneer Kadai (220)\n7. Butter Chicken (280)\n8. Dal Tadka (150)\n9. veg toofani (140)\n10. Biryani (300)\n11. chikeen Tandoori(30)\n");
        printf("\nCold drinks: \n");
        printf("\n12. bisleri(20)\n13. mojito(60)\n14. masala chhas(40)\n15. old monk(150)\n16. lassi(30)");
        printf("\n What would you like to have? ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n You have selected Sandwich.");
                bill = bill + 80;
                break;
            case 2:
                printf("\n You have selected Poha.");
                bill = bill + 50;
                break;
            case 3:
                printf("\n You have selected Idli.");
                bill = bill + 70;
                break;
            case 4:
                break;
            case 5:
                printf("\n You have selected Veg Kolhapuri.");
                bill = bill + 240;
                break;
            case 6:
                printf("\n You have selected Paneer Kadai.");
                bill = bill + 220;
                break;
            case 7:
                printf("\n You have selected Butter Chicken.");
                bill = bill + 280;
                break;
            case 8:
                printf("\n You have selected Dal Tadka.");
                bill = bill + 150;
                break;
            case 9:
                printf("\n You have selected veg toofani.");
                bill = bill + 140;
                break;
            case 10:
                printf("\n You have selected Biryani.");
                bill = bill + 300;
                break;
            case 11:
                printf("\n You have selected chikeen Tandoori.");
                bill = bill + 30;
                break;
            case 12:
                printf("\n You have selecetd bisleri.");
                bill = bill + 20;
                break;
            case 13:
                printf("\n You have selecetd mojito.");
                bill = bill + 60;
                break;
            case 14:
                printf("\n You have selecetd malasa chhas.");
                bill = bill + 40;
                break;
            case 15:
                printf("\n You have selecetd old monk.");
                bill = bill + 150;
            case 16:
                printf("\n You have selecetd lassi.");
                bill = bill + 30;
            default:
                printf("\n Wrong choice, Please select something from menu.");
                break;
        }
    } while (choice != 4);

    if (bill != 0) {
        printf("\n-----------------KONRAD - BY HILTON--------------------\n");
        printf("\n Your total bill is %d", bill);
        printf("\n------------------------------------------------------\n");
    }

    printf("\n Thanks!!!!!!  Visit again.\n");
}
