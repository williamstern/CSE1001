#include <stdio.h>

int main(void) {
    int usr_int;
    double usr_dou;
    char usr_char;

    int *pnt_int;
    double *pnt_dou;
    char *pnt_char;

    printf("Enter an int double and char: ");
    scanf("%d %lf %c", &usr_int, &usr_dou, &usr_char);

    pnt_int = &usr_int;
    pnt_dou = &usr_dou;
    pnt_char = &usr_char;

    printf("%p %d\n", pnt_int, usr_int);
    printf("%p %lf\n", pnt_dou, usr_dou);
    printf("%p %c\n", pnt_char, usr_char);

    return 0;
}