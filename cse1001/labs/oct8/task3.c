#include <stdio.h>

int main(void) {
    char user_input;

    printf("Enter a character: ");
    scanf(" %c", &user_input);

    while (user_input > '0') {
        if (user_input == 'a' || user_input == 'e'|| user_input == 'i'|| user_input == 'o'|| user_input == 'u' || user_input == 'A' || user_input == 'E' || user_input == 'I'|| user_input == 'O' || user_input == 'U') {
            printf("It is a vowel!\n");
        }

        else if (user_input > 64 && user_input < 123){
            printf("It is a constant!\n");
        }
        printf("Enter a character: ");
        scanf(" %c", &user_input);
    }
    printf("That is my sentinel!\n");
    return 0;
}