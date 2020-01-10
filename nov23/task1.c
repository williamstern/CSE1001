#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    char pos[100];
    char org[100];
    char tag[100];

    printf("Enter Name: ");
    fgets(name, 100, stdin);
    printf("Enter Position: ");
    fgets(pos, 100, stdin);
    printf("Enter Orgonization: ");
    fgets(org, 100, stdin);

    strcat(tag, name);
    strcat(tag, pos);
    strcat(tag, org);

    printf("%s\n", tag);

    return 0;


}