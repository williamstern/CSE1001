#include <stdio.h>

int main(void) {
    char string[100];
    char string_copy[100];
    int num;
    int count = 0;
    
    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter a num: ");
    scanf("%d", &num);

    for(int i = num; string[i] != '\0'; i++) {
        string_copy[count] = string[i+1];
        count += 1;
    }
    printf("%s\n", string_copy);
    return 0;
}


