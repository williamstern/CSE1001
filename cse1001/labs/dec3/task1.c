#include <stdio.h>
#include <string.h>

int main(void) {
    printf("fsdsd");
    FILE *fin = fopen("count.txt", "r");
    int word_count = 1;
    int letter_count = 0;
    printf("sfsf");
    if (fin == NULL) {
        printf("sdfsfdsdfsd");
    }
    char * pch;
    
    char line[500];
    
    while (fgets(line, sizeof(line), fin) != NULL) {
        printf("sdsfd");
        fgets(line, 500, fin);
        pch = strtok (line," ");
        
        while (pch != NULL){
            word_count += 1;
            word_count += strlen(line);
        }
    }

    printf("words: %d\n", word_count);
    printf("Letters: %d\n", letter_count);
    return 0;
}
