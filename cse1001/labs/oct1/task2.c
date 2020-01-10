#include <stdio.h>

int main(void) {

    int loto;
    scanf("%d", &loto);

    if ((((loto / 100) % 10) == 4) || (((((loto / 100) % 10) % 4) == 0) && ((((loto / 100000) % 10) % 4) == 0))) {
	printf("Buy\n");
    }
    else {
	printf("Don't Buy\n");
    }
    return 0;
}
