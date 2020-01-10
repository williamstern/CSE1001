#include <stdio.h>
#include <math.h>

int main(void) {

    double x;
    double y;
    double temp_print;

    printf("x: ");
    scanf("%lf", &x);

    printf("y: ");
    scanf("%lf", &y);

    temp_print = (pow(x, 3) * pow(y, 3)) / (pow(x, 2) - x*y + pow(y, 2));
    printf("%lf\n", temp_print);

    temp_print = (pow(x, 3) / pow(y,3)) / (pow(x, 2) + x*y + pow(y, 2));
    printf("%lf\n", temp_print);
    return 0;
}
