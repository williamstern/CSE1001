/*
* Author: William Stern, wstern2019@my.fit.edu
* Course: CSE 1001, Section 03 Fall 2019
* Project: ordinal.c
*/
#include <stdio.h>

int main(void) {
    int user_input = 0;
    int sum = 0;
    
    printf("Welcome to Ordinal numbers!\n");
    printf("Enter a value between 0 and 65535 (negative value to quit): ");
    scanf("%d", &user_input);

    while (user_input >= 0) {
        if (user_input <= 65535) { // Checks to see if number is too large
            for (int i = 0; i <= user_input; i++) { // loops from 0 to value inputed
                if (i % 10 == 1 && i % 100 != 11) {
                    printf("%dst Value\n", i);
                }
                else if (i % 10 == 2 && i % 100 != 12) {
                    printf("%dnd Value\n", i);
                }
                else if (i % 10 == 3 && i % 100 != 13) {
                    printf("%drd Value\n", i);
                }
                else {
                    printf("%dth Value\n", i);
                }
            }
            sum += user_input; // adds input to sum
        }
        else {
            printf("Input not allowed. Try again.\n");
        }
        printf("Enter a value between 0 and 65535 (negative value to quit): ");
        scanf("%d", &user_input);
    }
    // Runs while input is < 0
    printf("The sum of all your entered numbers is %d\n", sum); 
    printf("Goodbye! Thanks for playing!\n");
    
    return 0;
}