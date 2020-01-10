#include <stdio.h>
#include <math.h>

int main(void) {
    int a;
    int b;
    printf("enter a and b ");
    scanf("%d %d", &a, &b);

    int *p_a = &a;
    int *p_b = &b;

    int temp1 = *p_a * *p_b;
    int temp2 = pow(*p_a, *p_b);

    a = temp1;
    b = temp2;

    printf("A: %d B: %d\n", a ,b);

    return 0;
}