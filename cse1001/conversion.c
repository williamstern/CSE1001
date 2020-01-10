#include <stdio.h>

int main(void) {
    
    double fer;
    double kel;
    
    printf("Enter a temp in ferenheight ");
    scanf("%lf", &fer);

    kel = ((fer-32.0) * 5/9) + 273.15;

    printf("The temp in kelvin is %lf\n", kel);
    return 0;

}