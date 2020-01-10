#include <stdio.h>
#include <math.h>

int main(void) {

    int a;
    int b;
    int n;

    int in_sum = 0;


    scanf("%d %d %d", &a, &b, &n);

    for (int o = 0; o < n; o++) {
	for (int i = 0; i <= o; i++) {
	    in_sum += pow(2, i) * b;
	}
	in_sum += a;
	printf("%d\n", in_sum);
	in_sum = 0;
    }
    return 0;
}
