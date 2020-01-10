#include <stdio.h>
#include <math.h>

int main(void) {

    int a;
    int b;
    int n;

    int sum;
    int sum_mult = 1;

    scanf("%d %d %d", &a, &b, &n);
    sum = a;
    for (int i = 1; i <= n; i++) {
	sum += sum_mult * b;
	sum_mult *= 2;
	printf("%d\n", sum);
    }

    return 0;
}
