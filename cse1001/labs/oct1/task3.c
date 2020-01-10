#include <stdio.h>

int main(void) {

    double grade;

    scanf("%lf", &grade);

    if (grade >= 90) {
	printf("A\n");
    }

    else if (grade >= 80) {
	printf("B\n");
    }

    else if (grade  >= 70) {
	printf("C\n");
    }

    else if (grade >= 60) {
	printf("D\n");
    }

    else if (grade < 60) {
	printf("F\n");
    }

    return 0;
}
