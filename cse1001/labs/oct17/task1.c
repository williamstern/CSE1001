#include <stdio.h>
#include <math.h>

int main(void) {
    int input;
    int num;

    printf("Enter a number: ");
    scanf("%d", &input);

        for (int i = 0; i <= input; i++) {
            for (int p = 0; p <= i; p ++) {
                num = pow(p, 2);
                printf("%d ", num);
            }
            printf("\n");
        }
    return 0;
}