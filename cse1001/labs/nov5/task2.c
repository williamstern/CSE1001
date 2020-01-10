#include <stdio.h>
#include <math.h>

int main(void) {
    int len;
    int temp;

    printf("How many vales will you enter? ");
    scanf("%d", &len);
    int array[len];
    printf("Enter #'s\n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &temp);
        array[i] = temp;
    }

    for (int i = 0; i < len; i++) {
        int power = pow(array[i], 2);
        printf("%d ", power);
    }
    printf("\n");

    for (int i = 0; i < len; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}