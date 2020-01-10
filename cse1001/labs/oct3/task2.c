#include <stdio.h>

int main(void) {

    char choice;

    while (choice != 'Y') {
	printf("Are you Bob?(Y/N)");
	scanf(" %c", &choice);
    }
    printf("Hello Bob. Program Terminating\n");
    return 0;
}
