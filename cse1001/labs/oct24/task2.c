#include <stdio.h>
#include <math.h>

int num_length(int num);
int is_palindrome(int num);

int main(void) {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);
    int a = is_palindrome(input);
    if (a) {
        printf("That number is a palendrone\n");
    }
    else {
        printf("That number is not a palendrone\n");
    }


}

int num_length(int num) {
    int counter = 0;
    int divisor = 1;
    while ((num / divisor) > 0) {
        counter +=1;
        divisor *= 10;
    }
    return counter;
}

int is_palindrome(int num) {
    int forward;
    int backward;
    int f_divisor = 1;
    int b_divisor = pow(10,(num_length(num) - 1));
    //printf("6666: %d\n", b_divisor);
    int is_pal_count = 0;
    for (int counter = 1; counter <= num_length(num); counter++) {
        forward = (num / f_divisor) % 10;
        backward = (num / b_divisor) % 10;
        //printf("F%d    B%d\n", forward, backward);
        if (forward == backward) {
            is_pal_count += 1;
        }
        b_divisor /= 10;
        f_divisor *= 10;

    }

    if (is_pal_count == num_length(num)) {
        return 1;
    }
    else {
        return 0;
    }
}