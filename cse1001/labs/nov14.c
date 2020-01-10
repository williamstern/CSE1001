#include <stdio.h>

int main(void) {
    char users[3][3];
    int len = 3;
    int read = 0;
    int write = 0;


    for(int u = 0; u < len; u++) {
        for(int f = 0; f < len; f++) {
            printf("File Access Privilege for User %d for File %d: ", u, f);
            scanf(" %c", &users[u][f]);
        }
    }


    for(int u = 0; u < len; u++) {
        for(int f = 0; f < len; f++) {
            if(users[u][f] == 'R') {
                read += 1;
            }
            else {
                write += 1;
            }
        }
        printf("Number of files that  User %d can only read: %d\n", u, read);
        printf('Number of files that  User %d can write to: %d\n', u, write);
        read = 0;
        write = 0;
    }

    return 0;
}