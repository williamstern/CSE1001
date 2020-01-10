#include <stdio.h>

int main(void) {

    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
	if (c >= a) {
	    printf("%d %d %d", c, a, b);
	}
	
	else if (c <= b) {
	    printf("%d %d %d", a, b, c);
	}
	
	else {
	    printf("%d %d %d", a, c, b);
	}
    }

    else {
	if (c >= b) {
	    printf("%d %d %d", c, b, a);
	}
	
	else if (c <= a) {
	    printf("%d %d %d", b, a, c);
	}
	
	else {
	    printf("%d %d %d", b, c, a);
	}
    }
    return 0;
}
