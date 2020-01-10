#include <stdio.h>
#include <math.h>

int main(void)
{

    double a;
    double b;
    double c;

    printf("Enter side a: ");
    scanf("%lf", &a);

    printf("Enter side c: ");
    scanf("%lf", &c);

    b = pow(c, 2) - pow(a, 2);
    b = pow(b, 0.5);

    printf("Side B = %lf", b);
    return 0;
}
