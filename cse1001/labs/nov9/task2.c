#include <stdio.h>

void scan_array(int a[], int len);
void print_array(int b[], int len);
int find_unique_elements(int ar[], int el[], int len);

int main(void) {
    int len = 0;
    
    printf("Enter len of ar 1: ");
    scanf("%d", &len);
    printf("dfsdfds\n");
    int ar1[len];
    int el1[len] = {0};
    printf("dfsdfds\n");
    scan_array(ar1, len);
    int elment_len = 0;
    printf("dfsdfds\n");
    elment_len = find_unique_elements(ar1, el1, len);
    printf("dfsdfds\n");
    print_array(el1, elment_len);

    printf("Enter len of ar 2: ");
    scanf("%d", len);
    int ar2[len];
    int el2[len];
    scan_array(ar2, len);

    elment_len = find_unique_elements(ar2, el2, len);

    print_array(el2, elment_len);

    
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

int find_unique_elements(int ar[], int el[], int len) {
    int el_len = 1;
    el[0] = ar[0];
    int count  = 0;
    for(int i = 0; i < len; i++) {
        for(int p = 0; p < el_len; p++) {
            if (ar[i] != el[p]) {
                count++;
            }
        }
        if (count = len) {
            el_len += 1;
            count = 0;
            el[el_len] = ar[i];
        }
    }
}