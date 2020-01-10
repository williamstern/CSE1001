#include <stdio.h>

int calculate_gcd(int a, int b);

int main (void) {
    int input1;
    int input2;
    int lcm;
    char quit = 'n';

    while (quit != 'y') {
        printf("Enter two integers: ");
        scanf("%d %d", &input1, &input2);

        lcm = (input1 * input2) / (calculate_gcd(input1, input2));

        printf("The lcm of %d and %d is %d\n", input1, input2, lcm);
        printf("Do you want to quit (y/n):");
        scanf(" %c", &quit);
    }
}

int calculate_gcd(int a, int b) {
    if (a % b > 0) {
        int c = a % b;
        a = b;
        b = c;
        calculate_gcd(a, b);
    }
    else{
        return b;
    }

}