#include <stdio.h>

int main(void){

    int a;
    int b;
    int temp;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("a = %d \t b = %d\n", a, b);

    temp = b;
    b = a;
    a = temp;

    printf("a = %d \t b = %d\n", a, b);
    return 0;
}
