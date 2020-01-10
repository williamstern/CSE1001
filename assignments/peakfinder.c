// William Stern
// 2D peakfinder
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int random_generator(int max, int extra);
void d2_print(int array[20][20]);

int main(void) {
    int grid[20][20];
    int peaks[10] = { [0 ... 9] = -1 };
    int poi = -1; // point of interest
    int left = -1;
    int right = -1;
    int up = -1;
    int down = -1;

    // Fill the grid with random ints
    for(int row = 0; row < 20; row++) {
        for(int collumn = 0; collumn < 20; collumn++) {
            grid[row][collumn] = random_generator(50, (row +2 * collumn + 5) % 20);
        }
    }

    d2_print(grid);

    int counter = 0;
    for(int row = 0; row < 20; row++) {
        for(int collumn = 0; collumn < 20; collumn++) {
            poi = grid[row][collumn];

            if (row > 0){
                left = grid[row-1][collumn];
            }
            if (row < 19) {
                right = grid[row+1][collumn];
            }
            if (collumn > 0) {
                up = grid[row][collumn-1];
            }
            if (collumn < 19) {
                down = grid[row][collumn+1];
            }

            if (poi > up && poi > down && poi > left && poi > right) {
                peaks[counter] = poi;
                counter += 1;
            }

                left = -1;
                right = -1;
                up = -1;
                down = -1;

        }
    }

    printf("Peaks: ");
    for(int i = 0; i < 10; i++) {
        if (peaks[i] != -1) {
            printf("%d ", peaks[i]);
        }
    }
    printf("\n");

    return 0;
}

// Generates random numbers 
// Copied from Memory Assignment
int random_generator(int max, int extra) {
    srand((unsigned)time(NULL) + (unsigned)extra);
    int rand_num = rand() % (max+1);
    return rand_num;
}

// Also copied froom Memory Assignment
void d2_print(int array[20][20]) {
    for(int r = 0; r < 20; r++) {
        for(int c = 0; c < 20; c++) {
            printf("%d ", array[r][c]);
        }
        printf("\n");
    }
}