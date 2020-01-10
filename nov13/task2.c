#include <stdio.h>

void scan_array(int a[], int len);
int find_tallest(int a[], int len);
int blown_candles(int a[], int len, int tall);

int main(void) {
    int size;
    int hight;
    int num;
    
    // ok boomer
    printf("Enter your age: ");
    scanf("%d", &size);

    int candles[size];

    printf("Enter the height of the candles: ");
    scan_array(candles, size);

    hight = find_tallest(candles, size);
    num = blown_candles(candles, size, hight);

    printf("%d candles were blown out\n", num);
    
    return 0;
}

int find_tallest(int a[], int len) {
    int max = 0;
    for(int i = 0; i < len; i++){
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int blown_candles(int a[], int len, int tall) {
    int count = 0;
    for(int i = 0; i < len; i++) {
        if (a[i] == tall) {
            count += 1;
        }
    }
    return count;
}

void scan_array(int a[], int len) {
    int temp = 0;
    for(int i = 0; i < len; i++) {
        scanf("%d", &temp);
        a[i] = temp;
    }
}