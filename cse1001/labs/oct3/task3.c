#include <stdio.h>

int main(void) {

    int x;

    printf("Please enter a number: ");
    scanf("%d", &x);

    for (int i = x; i >= 0; i--) {
	printf("Loop iteration %d\n", i);
    }
    return 0;
}
