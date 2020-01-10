#include <stdio.h>

int main(void) {
    double x;
    double y;

    scanf("%lf %lf", &x, &y);

    if (x == 0) {
        printf("y-line\n");
    }
    
    else if (y == 0) {
        printf("x-line\n");

    }

    else if (x > 0) {

        if (y > 0) {
            printf("Quadrent 1\n");
        }

        else {
            printf("Quadrent 4\n");
        }

    }

    else {
        if (y > 0) {
            printf("Quadrent 2\n");
        }
        else {
            printf("Quadrent 3\n");
        }
    }
}