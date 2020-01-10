#include <stdio.h>

int main(void) {
    int input;
    int num = 1;

    printf("Enter  a number: ");
    scanf("%d", &input);
    while (input > 0) {
        for (int line = 1; line <= input; line ++) {
            printf("%d! = ", line);
            for (int place = 1; place <= line; place ++){
                num *= place;
                printf("%d ", place);
                if (place != line) {
                    printf("x ");
                }
            }
            printf("= %d\n", num);
            num = 1;
        }
    printf("Enter  a number: ");
    scanf("%d", &input);
    }
}