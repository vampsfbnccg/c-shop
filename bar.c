#include <stdio.h>
/*project: C snack bar application
  author: Levis Bangua Chomba
*/
int menu(){
    int item;
    int quantity;
    printf("Welcome to  vv C snack shop! \n");
    printf("\tToday's Menu\n");
    printf("1.soda KES 60\n");
    printf("2.samosa KES 40\n");
    printf("3.chips KES 100\n");
    printf("Enter item no.: ");
    scanf("%d",&item);
    printf("enter item quantity: ");
    scanf("%d",&quantity);
 switch (item)
 {
 case 1:
    printf(" ======  Item added to cart  ========= \n");
    int total = 60 * quantity;
    printf("Sub total: %d \n", total);
    printf("VAT at 16 percent: %lf \n", total * 0.16);
    printf("Total amount: %lf \n", total +  total * 0.16);
    printf("\t levie has been your serever \t");
    break;
 case 2:
    printf(" ======  Item added to cart  ========= \n");
    int total1 = 40 * quantity;
    printf("Sub total: %d \n", total1);
    printf("VAT at 16 percent: %lf \n", total1 * 0.16);
    printf("Total amount: %lf \n", total1 +  total1 * 0.16);
    printf("\t levie has been your serever \t");
    break;
 case 3:
    printf(" ======  Item added to cart  ========= \n");
    int total2 = 100 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %lf \n", total2 * 0.16);
    printf("Total amount: %lf \n", total2 +  total2 * 0.16);
    printf("\t levie has been your serever \t");
    break;

 default:printf("INVALID CHOICE"); menu();
    break;
 }
    

    return item;

}
int main(){
 menu();
};