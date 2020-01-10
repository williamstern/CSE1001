#include <stdio.h>
#include <string.h>

int main(void) { 
    char string[200];
    printf("Enter a string: ");
    fgets(string, 200, stdin);
    char elims[] = " %sd";
    char *token = strtok(string, elims); 

    while(token != NULL) {  
        printf("%s\n", token);  
        token = strtok(NULL, elims);
    }  

    return 0;
}