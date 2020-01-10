#include <stdio.h>

int main(void) {

    double your_balance;
    double min_balance = 200.20;

    printf("Enter your balance: ");
    scanf("%lf", &your_balance);

    if (your_balance >= min_balance) {
	printf("You have the minimul balance\n");
    }

    else {
	printf("You do not have the minimum balance\n");
    }
    return 0;
}
