#include <stdio.h>

int main(void) {
    int empty[8];

    for (int i = 0; i < 8; i++) {
        printf("%d", empty[i]);
    }
    printf("\n");

    int small[5];
    printf("%d %d %d", small[6], small[7], small[8]);

    return 0;
}