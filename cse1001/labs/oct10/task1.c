#include <stdio.h>

int main(void) {

    int input;
    int sum = 1;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
	sum *= i;
    }

    printf("%d", sum);
    return 0;
}
