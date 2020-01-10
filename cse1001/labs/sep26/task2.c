#include <stdio.h>

int main(void) {

    int x;
    scanf("%d", &x);
    if ((x % 100) == 0) {
        if ((x%400 ) == 0){
            printf("That year is a leap year\n");
        }
    }

    else if((x%4) == 0) {
        printf("That is a leap year\n");
    }
}