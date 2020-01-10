#include <stdio.h>

int main(void) {
    char cup1 = '$';
    char cup2 = '0';
    char cup3 = '0';

    char *p_cup1 = &cup1; 
    char *p_cup2 = &cup2; 
    char *p_cup3 = &cup3;
    char *temp;
    

    printf("Cup 1: Memory location is %p and it holds %c\n", p_cup1, cup1);
    printf("Cup 2: Memory location is %p and it holds %c\n", p_cup2, cup2);
    printf("Cup 3: Memory location is %p and it holds %c\n", p_cup3, cup3);

    *temp = *p_cup1;
    *p_cup1 = *p_cup2;
    *p_cup2 = *temp;
   
    int guess;
    printf("Choose a cup: ");
    scanf("%d", &guess);

    
    switch (guess)
    {
    case 1:
        printf("Try again later...\n");
        break;

    case 2:
        printf("You won!\n");
        break;

    case 3:
        printf("Try again later...\n");
        break;
    
    default:
        printf("that is not a cup!\n");
        break;
    }

    return 0;
}