#include <stdio.h>

int main(void){

     double coffee = 2.5;
     double chocolate = 1.75;
    double soda = 1.0;
    double total;

    total = (coffee * 2) + (chocolate * 3) + soda;

    printf("Coffee $%.2f x 2\n", coffee);
    printf("Chololate %.2f x 3\n", chocolate);
    printf("Soda $%.2f\n", soda);
    printf("Total $%.2f", total);
    return 0;
}
