#include <stdio.h>

int main(void) {

    int num;

    printf("Enter an int: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
	printf("it is even\n");
    }

    else {
	printf("it is odd\n");
    }


    if (num < 0) {
	printf("it is negetive\n");
    }

    else {
	printf("it is positive\n");
    }
    return 0;
}
