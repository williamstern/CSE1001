#include <stdio.h>
#include <string.h>

int main(void) {
    char array[150];
    fgets(array, 150, stdin);
    char find;
    printf("Enter char to find: ");
    scnaf(" %c", &find);
    int start = -1;
    int end = -1;
    char copy[150];

    for(int i = 0; i < 150; i ++) {
        if(array[i] == find && ((array[i] - 1) == ' ' || i == 0)) {
            start = i;
        }
        if (start != -1 && (array[i] == ' ' || array[i] == '\0')) {
            strncpy ( copy, array, (i-start) );
            printf("%s", copy);
        }
    }
    
    return 0;
}