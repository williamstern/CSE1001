#include <stdio.h>
#include <math.h>

double compute_volume_cylinder(double radius, double height);

int main(void) {
    double r;
    double h;
    printf("Enter radius and height");
    scanf("%lf %lf", &r, &h);
    printf("The volume of the cylinder is %lf\n", (compute_volume_cylinder(r, h)));
    return 0;
}

double compute_volume_cylinder(double radius, double height) {
    return (M_PI * pow(radius, 2) * height);
}