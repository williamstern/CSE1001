#include <stdio.h>


int find_pair(int array[], int len);

int main(void) {
    int size1;
    int size2;
    int temp;
    int pair1;
    int pair2;

    printf("Enter array 1 size: ");
    scanf("%d", &size1);

    int ar1[size1];

    printf("Enter array 1: ");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &temp);
        ar1[i] = temp;
    }

    pair1 = find_pair(ar1, size1);

    printf("Enter array 2 size: ");
    scanf("%d", &size2);

    int ar2[size2];

    printf("Enter array 2: ");
    for(int i = 0; i < size2; i++) {
        scanf("%d", &temp);
        ar2[i] = temp;
    }

    pair2 = find_pair(ar2, size2);

    printf("Pairs in array 1 are: %d\n", pair1);
    printf("Pairs in array 2 are: %d\n", pair2);
    
    return 0;

}

int find_pair(int array[], int len) {
    int count_pair = 0;
    for(int r = 0; r < len; r++) {
        for(int c = 0; c < len; c++) {
            if(array[r] % array[c] == 0) {
                count_pair += 1;
            }
        }
    }
    count_pair -= 2;
    count_pair /= 2;
    return count_pair;
}