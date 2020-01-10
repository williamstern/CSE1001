#include <stdio.h>

void bill_count(int total, int *five, int *twen, int *tens);

int main(void) {
    int input;
    int num_50 = 0;
    int num_20 = 0;
    int num_10 = 0;
    printf("Enter the ammount of money ");
    scanf("%d", &input);

    bill_count(input, &num_50, &num_20, &num_10);

    printf("Num 50s = %d\n", num_50);
    printf("Num 20s = %d\n", num_20);
    printf("Num 10s = %d\n", num_10);

    return 0;
}

void bill_count(int total, int *five, int *twen, int *tens) {

    while(total > 0) {
        if (total >= 50) {
            total -= 50;
            *five += 1;
        }
        else if (total >= 20) {
            total -= 20;
            *twen += 1;
        }
        else {
            total -= 10;
            *tens += 1;
        }
    }

}