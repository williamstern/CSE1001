/*
* Author: William Stern, wstern2019@my.fit.edu
* Course: CSE 1001, Section 03 Fall 2019
* Filename: war.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *in_deck, int n);
int check_hand(int hand_size, int *hand);
void deal_hand(int *in_deck, int *hand1, int *hand2);       
int get_value(int *hand, int card); 
char get_suite(int *hand, int card);
int count_cards(int hand[], int hand_length);
void manage_card(int hand[], int number_gained, int *cards_gained);
void print_array(int array[], int length, int player);
void match(int *player1, int *player2);
void sort(int *hand, int hand_length);
void war(int *player1, int *player2, int cards_gained, int *cards_change);

int main(void) {
    printf("Welcome to War!\n");
    int deck[52];
    int player1[52];
    int player2[52];
    char play_choice = 'p';

    // Fills deck with 52 cards
    for (int i = 0; i < 52; i++) {
        deck[i] = i; 
    }
    
    printf("Shuffling deck...\n");
    shuffle(deck, 52);
    deal_hand(deck, player1, player2);

    printf("Would you like to play (p) or exit (e): ");
    scanf(" %c", &play_choice);

    // Checks to see if one person has all the cards
    while ((count_cards(player1, 52) != 52 && count_cards(player2, 52) != 52)) {
        //printf("PLAYER 1 CARDS: %d", count_cards(player1, 52));
        //printf("PLAYER 2 CARDS: %d", count_cards(player2, 52));
        if(play_choice == 'p') {
            match(player1, player2);
            printf("Would you like to play (p) or exit (e): ");
            scanf(" %c", &play_choice);
        }
        else {
            break;
        }
    }

    if (count_cards(player1, 52) == 52) {
        printf("The winner is player 1!\n");
    }

    else if(count_cards(player2, 52) == 52) {
        printf("The winner is player 2!\n");
    }

    else {
        printf("the game is a tie!\n");
    }

    printf("Goodbye! Thanks for playing War!\n");

    return 0;
}

// Goes to this function for each "battle"
void match(int *player1, int *player2) {
    int cards_change[52] = {0};
    int cards_gained = 0;


    printf("\nPlayer 1's card: ");
    int player1_card = get_value(player1, 0);
    printf("%c", get_suite(player1, 0));

    printf("\nPlayer 2's card: ");
    int player2_card = get_value(player2, 0);
    printf("%c", get_suite(player2, 0));
    printf("\n");

    if (player1_card > player2_card) {
        printf("Player 1 wins the round! Awarding played cards to Player 1...\n");
        cards_gained = 2;
        cards_change[0] = player2[0];
        cards_change[1] = player1[0];
        player1[0] = -1;
        sort(player1, 52);
        manage_card(player1, cards_gained, cards_change);
        sort(player2, 52);
        

    }
    else if(player1_card < player2_card){

        printf("Player 2 wins the round! Awarding played cards to Player 2...\n");
        cards_gained = 2;
        cards_change[0] = player1[0];
        cards_change[1] = player2[0];
        player2[0] = -1;
        sort(player2, 52);
        manage_card(player2, cards_gained, cards_change);
        sort(player1, 52);
        
    }
    else {
        printf("The cards match! It’s a battle!\n");
        printf("Drawing 3 cards from each player for battle...\n");
        int empty[52];
        for(int iter = 0; iter < 52; iter ++) {
            empty[iter] = -1;
        }
        war(player1, player2, 0, empty);
    }


}

void shuffle(int *in_deck, int n){
    srand((unsigned) time(NULL));
    if (n > 1) {
        int i, k, t;
        for (i = 0; i < (n - 1); i++) {
            k = i + rand() / (RAND_MAX / (n - i) + 1);
            t = in_deck[k];
            in_deck[k] = in_deck[i];
            in_deck[i] = t;
        }
    }
}

void deal_hand(int *in_deck, int *hand1, int *hand2) {
    printf("Dealing cards...\n");

    // Splits the deck among the two players
    for(int iter = 0; iter < 26; iter++) {
        hand1[iter] = in_deck[iter];
        hand2[iter] = in_deck[iter + 26];
    }

    // Fills the rest of the player hand arrays with -1 to show it is not filled
    for(int iter = 26; iter < 52; iter ++) {
        hand1[iter] = -1;
        hand2[iter] = -1;
    }
}

int check_hand(int hand_size, int *hand) {
    int empty_count = 0;
    for(int iter = 0; iter < hand_size; iter++) {
        if(hand[iter] == -1) {
            empty_count += 1;
        }
    }
    return empty_count;
}

// Gets the value of a card
int get_value(int *hand, int card) {
    int card_in_play = hand[card] % 13;
    switch(card_in_play) {
        case 12:
            printf("A");
            return 14;
            break;
        case 11:
            printf("K");
            return 13;
            break;  
        case 10:
            printf("Q");
            return 12;
            break;
        case 9:
            printf("J");
            return 11;
            break;
        default:
            printf("%d", (card_in_play+2));
            return (card_in_play + 2);
            
    }
}

// Finds the suite of a card
char get_suite(int *hand, int card) {
    int value = hand[card];

    if(value <= 12) {
        return 'S';
    }
    else if(value <= 25) {
        return 'D';
    }
    else if(value <= 38) {
        return 'H';
    }
    
    return 'C';
}

// Counts the cards until it gets to an "empty value" and then returns that number
int count_cards(int hand[], int hand_length) {
    for(int iter = 0; iter < hand_length; iter++) {
        if(hand[iter] == -1){
            return iter;
        }
    }
    return 52;
}

// Adds cards gained to the end of the winners hand
void manage_card(int hand[], int number_gained, int *cards_gained) {
    for(int iter = 0; iter < number_gained; iter++) {
        hand[count_cards(hand, 52)] = cards_gained[iter];
    }
}

// Moves the first -1 to the end of the hand and moves all of the other cards up
void sort(int *hand, int hand_length) {
    while(hand[0] == -1 || hand[0] == 0) {
        for(int iter = 0; iter < hand_length - 1; iter++) {
            hand[iter] = hand[iter+1];
        }
        hand[52] = -1;
    }
}

void print_array(int array[], int length, int player) {
    printf("PLAYER: %d: ", player);
    for(int i = 0; i < length; i++) {
        int temp = array[i];
        printf("%d ", temp);
    }
}

// Goes to this function if two players have the same card
void war(int *player1, int *player2, int cards_gained, int *cards_change) {


    printf("\nPlayer 1's card: ");
    get_value(player1, (cards_gained / 2) -  1);
    printf("%c", get_suite(player1, (cards_gained / 2) - 1));

    printf("\nPlayer 2's card: ");
    get_value(player2, (cards_gained / 2) - 1);
    printf("%c", get_suite(player2, (cards_gained / 2) - 1));
    printf("\n");

    cards_gained += 10;
    
    for(int iter = 0; iter < cards_gained / 2; iter++) {
        cards_change[iter] = player2[iter];
        cards_change[iter+4] = player1[iter];
    }
    
    if(count_cards(player2, 52) < cards_gained) {
            cards_gained = 52 - count_cards(player2, 52) ;
    }

    if(count_cards(player1, 52) < cards_gained) {
        cards_gained = 52 - count_cards(player1, 52);
    }

    // If players1 card is begger than players2
    if(player1[(cards_gained / 2) - 1] % 13 > player2[(cards_gained / 2) - 1] % 13) {
        
        for(int iter = 0; iter < cards_gained / 2; iter++) {
            player1[0] = -1;
            player2[0] = -1;
            
        }
        sort(player1, 52);
        sort(player2, 52);
        manage_card(player1, cards_gained, cards_change);
        printf("Player 1 wins the round! Awarding played cards to Player 1...\n");
    }
     // If players2 card is begger than players1
    else if(player1[(cards_gained / 2) - 1] % 13 < player2[(cards_gained / 2) - 1] % 13){

        for(int iter = 0; iter < cards_gained / 2; iter++) {
            player1[0] = -1;
            player2[0] = -1;
            
        }
        sort(player1, 52);
            sort(player2, 52);
        manage_card(player1, cards_gained, cards_change);
        printf("Player 2 wins the round! Awarding played cards to Player 2...\n");
    }
    // Recalls the function if they have the same card again
    else {
        for(int iter = 0; iter < cards_gained / 2; iter++) {
            player1[0] = -1;
            player2[0] = -1;
            
        }
        sort(player1, 52);
            sort(player2, 52);
        war(player1, player2, cards_gained, cards_change);
    }
}