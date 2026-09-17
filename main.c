/*
 * Author:     Bianca Cerda
 * Program:    The Corner Store Simulator
 * Purpose:    [The purpose of this program is to keep track of the customer’s items and their total.
 * Reflection: The trickiest part to get right was stopping the loop, for the longest time I had a for loop. I switched to a while because of the hints on the build it section.
 */

#include <stdio.h>

int main (){
    int choice;
    int apples, banannas, carrots, oranges;
    float total = 0;
    int i = 1;

    /*Show the menu*/
    printf("Welcome to the Simple shopping system!!");
    printf("1. Apples--$2.50 each\n");
    printf("2. Banannas--$1.20 each\n");
    printf("3. Carrots--$3.00 each\n");
    printf("4. Oranges--$2.00 each\n");
    printf("5. Exit -- leave the store\n");

        while (i){
            printf("Enter the number of the product you want to buy (1-5) ");
            if(scanf("%d", &choice) != 1){
                break;
            }

            switch(choice){
                case 1:
                    printf("Enter the quantity: ");
                    scanf("%d", &apples);
                    total = total + (apples * 2.5);
                    printf("Added %d apples to your cart. Total so far: $%.2f. \n", apples, total);
                    break;
                case 2:
                    printf("Enter the quantity: ");
                    scanf("%d", &banannas);
                    total = total + (banannas * 1.2);
                    printf("Added %d bananas to your cart. Total so far: $%.2f. \n", banannas, total);
                    break;
                case 3:
                    printf("Enter the quantity: ");
                    scanf("%d", &carrots);
                    total = total + (carrots * 3.0);
                    printf("Added %d carrots to your cart. Total so far: $%.2f. \n", carrots, total);
                    break;
                case 4:
                    printf("Enter the quantity: ");
                    scanf("%d", &oranges);
                    total = total + (oranges * 2.0);
                    printf("Added %d oranges to your cart. Total so far: $%.2f. \n", oranges, total);
                    break;
                case 5:
                    i = 0;
                    printf("Thank you for shopping with us!!\n");
                    if (total >= 100){
                        total = total - (total * 0.10); 
                        printf("A 10%% discount has been applied!!.\n");
                        printf("Your final total is: $%.2f\n", total);
                    }
                    else{
                        printf("Your final total is: $%.2f\n", total);
                    }
                    break;
                default:
                    printf("Invalid choice, pick again\n");
                    break;

        
            }
        }
        return 0;
}