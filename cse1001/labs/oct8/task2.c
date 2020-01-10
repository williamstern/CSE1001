#include <stdio.h>

int main(void) {
    int user_input;
    printf("Enter an integer: ");
    scanf("%d", &user_input);

    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", user_input, i, (i * user_input));
    }
    return 0;
}