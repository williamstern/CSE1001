#include <stdio.h>

int main(void) {

    int x;
    int devisor = 10;
    int z;

    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("%d\n", (x %10));
    while ((x / devisor) > 0) {
        z = (x / devisor) % 10;
        printf("%d\n", z);
        devisor *= 10;
    }
    return 0;
}

