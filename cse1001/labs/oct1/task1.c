#include <stdio.h>

int main(void) {

    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a > 15 && b > 15 && c > 15) || (((a+b+c) > 42) && (a > 20 || b > 20 || c > 20))) {
	printf("Allowed\n");
    }
    return 0;
}
