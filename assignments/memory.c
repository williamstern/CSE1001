/*
* Author: William Stern, wstern2019@my.fit.edu
* Course: CSE 1001, Section 03 Fall 2019
* Project: memory.c
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int random_generator(int max, int extra);
void knuth_shuffle(int array[], int size);
void fill_1d(int array[16], int size);
void fill_board(char board[4][4], char back[4][4]);
void d2_print(char array[4][4]);
void print_board(char board[4][4]);
int guess(char board[4][4], char back[4][4], int x1, int y1, int x2, int y2, int *matches);

int main(void) {
    int matches = 0; // How many cards are matched so far
    int y1, x1, y2, x2;
    char option; // F or Q
    char board[4][4]; // Fronts of cards
    char back[4][4]; // Backs of cards and flips
    int guess_code; // Return code from guess funct

    printf("Welcome to MEMORY! Ready Player One...\n\n");
    fill_board(board, back); 
    printf("Here is the board:\n\n");
    print_board(back);

    while(matches < 8 && option != 'Q') {
        printf("Choose an option:\n");
        printf("(F) Find a match\n");
        printf("(Q) Quit\n");
        printf("Choice: ");
        scanf(" %c", &option);

        if(option == 'F') {
            printf("Pick first card (row, column): ");
            scanf("%d,%d", &x1, &y1);

            printf("Pick second card (row, column): ");
            scanf("%d,%d", &x2, &y2);

            guess_code = guess(board, back, x1, y1, x2, y2, &matches);
            printf("\n");

            // If choice of cards was invalid
            if(guess_code == 2) { 
                printf("You cannot pick those cards\n\n");
            }
        }
    }
    if (matches == 8) {
        printf("You Won!\n");
    }
    else if(option == 'Q') {
        printf("Your total points: %d. Goodbye.\n", matches);
    }
    return 0;
}

int guess(char board[4][4], char back[4][4], int x1, int y1, int x2, int y2, int *matches) {
    if(((x1 <= 4 && x1 >= 0) && (y1 <= 4 && y1 >= 0) && (x2 <= 4 && x2 >= 0) && (y2 <= 4 && y2 >= 0))) {
        if(back[x1][y1] != '$' || back[x2][y2] != '$' || (x1 == x2 && y1 == y2)) {
            return 2; // Return code 2 if for invalid input
        }
        else {
            back[x1][y1] = board[x1][y1];
            back[x2][y2] = board[x2][y2];
            
            if(board[x1][y1] != board[x2][y2]) { // If the cards don't match
                printf("\nCards do not match! Try again!\n");
                printf("Here is the board:\n\n");
                print_board(back);
                back[x1][y1] = '$';
                back[x2][y2] = '$';
                return 1;
            }
            else { // If the cards match
                printf("\nCards match! You get a point!\n");
                *matches += 1;
                printf("Your total points: %d\n", *matches);
                printf("\nHere is the board:\n\n");
                print_board(back);
                return 0;
            }
        }
    }
    else {
        return 2;
    }
}

void fill_board(char board[4][4], char back[4][4]) {
    // Fills back with '$'
    for(int r = 0; r < 4; r++) {
        for(int c = 0; c < 4; c++) {
            back[r][c] = '$';
        }
    }

    int starter_array[16];
    fill_1d(starter_array, 16);
    knuth_shuffle(starter_array, 16);

    // Convets the 1d int array to 2d char array
    int index = 0;
    for(int row = 0; row < 4; row++) {
        for(int collumn = 0; collumn < 4; collumn ++) {
            board[row][collumn] = (char)(starter_array[index] + 65);
            index += 1;
        }
    }
    //d2_print(board);
}

// Fills a 1d array with random pairs of ints
void fill_1d(int array[16], int size) {
    int chars_used[8] = { [0 ... 7] = -1 };
    int used = 0;
    int random;
    for(int iter = 0; iter < size; iter+=2) {
        do {
            random = random_generator(25, iter);
            used = 0;
            for(int jiter = 0; jiter < 8; jiter++) {
                if(random == chars_used[jiter]) {
                    used = 1;
                }
            }
        }
        while(used);
        if(!used) {
            //printf("RANDY: %d\n", random);
            array[iter] = random;
            array[(iter+1)] = random;
            chars_used[(iter/2)] = random;
        }
        //printf("ITER: %d\n", (iter/2));
    }
}

// Generates random numbers 
int random_generator(int max, int extra) {
    srand((unsigned)time(NULL) + (unsigned)extra);
    int rand_num = rand() % (max+1);
    return rand_num;
}

// My own implementation of Knuths shuffle algorithm
void knuth_shuffle(int array[], int size) {
    int temp;
    for(int iter = (size-1); iter >= 0; iter--) {
        int random = random_generator(iter, iter);
        temp = array[random];
        array[random] = array[iter];
        array[iter] = temp;
    }
}

// Debug
void d2_print(char array[4][4]) {
    for(int r = 0; r < 4; r++) {
        for(int c = 0; c < 4; c++) {
            printf("%c ", array[r][c]);
        }
        printf("\n");
    }
}

void print_board(char board[4][4]) {
    printf("    0   1   2   3\n");
    printf("0 | %c | %c | %c | %c\n", board[0][0], board[0][1], board[0][2], board[0][3]);
    printf("-----------------\n");
    printf("1 | %c | %c | %c | %c\n", board[1][0], board[1][1], board[1][2], board[1][3]);
    printf("-----------------\n");
    printf("2 | %c | %c | %c | %c\n", board[2][0], board[2][1], board[2][2], board[2][3]);
    printf("-----------------\n");
    printf("3 | %c | %c | %c | %c\n", board[3][0], board[3][1], board[3][2], board[3][3]);
    printf("-----------------\n");
}