#include <stdio.h>

int main(int argc, const char *argv[]) {
    argc = 3;


    if (strcmp(argv[1], argv[2]) >= 1 && strcmp(argv[2], argv[3]) >= 1){
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }

    else if (strcmp(argv[1], argv[2]) <= 1 && strcmp(argv[2], argv[3]) <= 1) {
        for (int i = 3; i >= 1; i++) {
            printf("%s\n", argv[i]);
        }
    }

    else if (strcmp(argv[1], argv[2]) >= 1 && strcmp(argv[2], argv[3]) <= 1) {
        printf("%s\n", argv[1]);
        printf("%s\n", argv[3]);
        printf("%s\n", argv[2]);
    }

    else if (strcmp(argv[1], argv[2]) <= 1 && strcmp(argv[2], argv[3]) >= 1) {
        printf("%s\n", argv[2]);
        printf("%s\n", argv[1]);
        printf("%s\n", argv[3]);
    }
}  