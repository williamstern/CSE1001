#include <stdio.h>

void scan_array(int a[], int len);
void print_array(int b[], int len);
void swap_array(int *ar1, int *ar2);

int main(void) {
    int len = 5;
    int ar1[5];
    int ar2[5];

    printf("Enter ar1: \n");
    scan_array(ar1, len);
    printf("Enter ar2: \n");
    scan_array(ar2, len);

    swap_array(ar1, ar2);

    printf("ar1");
    print_array(ar1, len);
    printf("ar2");
    print_array(ar2, len);

    return 0;
}

void scan_array(int a[], int len) {
    int temp = 0;
    for(int i = 0; i < len; i++) {
        scanf("%d", &temp);
        a[i] = temp;
    }
}

void print_array(int b[], int len) {
    for(int i = 0; i < len; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

void swap_array(int ar1[], int ar2[]) {
    for(int i = 0; i < 5; i++) {
        int temp = ar2[i];
        ar2[i] = ar1[i];
        ar1[i] = temp;
    }
}