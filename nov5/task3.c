#include <stdio.h>
#include <math.h>

int main(void) {
    double array[10];
    double len = 10.0;
    double max = -9999999999999999;
    double min = 99999999999999999;
    double temp;
    double sum = 0.0;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &temp);
        array[i] = temp;
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
        sum += array[i];
    }

    printf("Min: %lf max: %lf\n", min, max);
    double average = sum / len;
    printf("Avarage: %lf\n", average);
    double rms = pow(average, 0.5);
    printf("root mean square: %lf", rms);
}