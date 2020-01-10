#include <stdio.h>

int main(void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 13 == 0){
	printf("It is divisable by 13\n");
    }

    else {
	printf("It is not dicisable by 13\n");
    }
    return 0;
}
