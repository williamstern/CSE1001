#include <stdio.h>
#include <string.h>

int main(void) {
    printf("fsdsd");
    FILE *fin1 = fopen("count.txt", "r");
    FILE *fin2 = fopen("count2.txt", "r");
    FILE *pFile2 = fopen("myfile2.txt", "a");
    
    char line[500];
    
    while (fgets(line, sizeof(line), fin1) != NULL) {
        //printf("sdsfd");
        fgets(line, 500, fin1);
            fprintf(pFile2, "%s", line);
        
    }

    while (fgets(line, sizeof(line), fin2) != NULL) {
        //printf("sdsfd");
        fgets(line, 500, fin1);
            fprintf(pFile2, "%s", line);
        
    }
    return 0;
}
