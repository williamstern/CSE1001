#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned long long len;
    unsigned long long change;
    unsigned long long num;
    unsigned long long devisor;

    scanf("%lld %lld", &len, &change); // Input length and digits to change
    scanf("%lld", &num); // Inputs number to change

    if (len == 1) { // Changes only digit if the lenght is one
        printf("0");
    }
    else {
        // splits number into individual digits
        devisor = pow(10, (len-1));

        int large_dig = (num / devisor) % 10;
        if ( large_dig > 0 && change >= 0){ // Changes largest digit into 1 if change is greater than 1
            num -=  devisor * (((num / devisor) % 10) - 1);
            change -= 1;
            devisor /= 10;
        }

        // Changes the rest of the numbers to zero if they are not zero 
        for (int count = 0; count < len && change > 0; count++) {
            if(devisor >= 10 &&((num / devisor) % 10) > 0) {
                num -= devisor * ((num / devisor) % 10);
                change -= 1;
            }
            else {
                num -= (num % 10);
            }
            devisor /= 10;
        }
        printf("%lld", num);
    }
    return 0;
}