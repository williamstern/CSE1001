#include <stdio.h>

int main(void) {
    int row;
    int col;
    char op;

    printf("Enter sizes: ");
    scanf("%d %d", &row, &col);

    int array1[row][col];
    int array2[row][col];

    printf("Enter array 1 elements");

    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            scanf("%d", &array1[r][c]);
        }
    }

    printf("Enter array 2 elements");

    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            scanf("%d", &array2[r][c]);
        }
    }

    printf("Enter an operation: )");
    scanf(" %c", &op);

    while(op != 'E') {

        if(op == 'T') {
            printf("Array 1:\n");
            for(int c = 0; c < row; c++) {
                for(int r = 0; r < col; r++) {
                    printf("%d ", array1[r][c]);
                }
                printf("\n");
            }
            printf("Array 2:\n");
            for(int c = 0; c < row; c++) {
                for(int r = 0; r < col; r++) {
                    printf("%d ", array2[r][c]);
                }
                printf("\n");
            }
        }

        else if(op == 'D') {
            printf("Array 1");
            for(int i = 0; i < col; i ++) {
                printf("%d ", array1[i][i]);
            }
            printf("\n");

            printf("Array 2");
            for(int i = 0; i < col; i ++) {
                printf("%d ", array2[i][i]);
            }
            printf("\n");
        }

        else if(op == 'E') {
            break;
        }
        printf("Enter an operation: )");
        scanf(" %c", &op);
    }



    return 0;
}