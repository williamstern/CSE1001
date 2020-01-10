#include <stdio.h>
#include <math.h>

int main(void){

    double lat1;
    double long1;
    double lat2;
    double long2;
    double d;

    printf("Enter lat1 and long1: ");
    scanf("%lf %lf", &lat1, &long1);

    printf("Enter lat2 and long2: ");
    scanf("%lf %lf", &lat2, &long2);

    d = 3959 * acos(sin((lat1 / 180)* M_PI) * sin((lat2/180)*M_PI) + 
        cos((lat1/180)*M_PI) * cos((lat2/180)*M_PI)*
        cos(((long1-long2)/180)*M_PI));

    printf("Great circle distance: %lf\n", d);
    return 0;
}
