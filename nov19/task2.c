#include <stdio.h>

int main(void) {
    char string1 [100];
    char string2[100];
    char temp;

    printf("Enter string 1: ");
    scanf("%s", string1);
    printf("Enter string 2: ");
    scanf("%s", string2);

    for(int i = 0; i < (100); i++) {
        temp = string1[i];
        string1[i] = string2[i];
        string2[i] = temp;
    }

    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    return 0;
}