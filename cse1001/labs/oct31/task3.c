#include <stdio.h>
#include <math.h>

void scan_data(char *sign, int *num);
int do_next_op(char sign, int num, int total);

int main(void) {
    int number;
    char operand = '0';
    int total = 0;

    printf("Enter [command operand]:");
    scan_data(&operand, &number);
    while (operand != 'q') {
        total = do_next_op(operand, number, total);
        printf("result so far is %d\n", total);
        scan_data(&operand, &number);
    }
    printf("final result is %d\n", total);

    return 0;
}

void scan_data(char *sign, int *num) {
    char operand;
    int number;
    scanf(" %c %d", &operand, &number);
    *sign =  operand;
    *num = number;
}

int do_next_op(char sign, int num, int total) {
    if(sign == '+') {
        total += num;
    }
    else if(sign == '-') {
        total -= num;
    }
    else if (sign == '*') {
        total *= num;
    }
    else if (sign == '/') {
        total /= num;
    }
    else if (sign == '^') {
        total = pow(total, num);
    }
    return total;
}