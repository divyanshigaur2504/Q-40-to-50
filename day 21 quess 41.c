#include <stdio.h>

int main() {
    int num, first, last, digits = 0;

    
    scanf("%d", &num);

    int temp = num;
    last = temp % 10;

    
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    
    if (num < 10 || first == last) {
        printf("%d\n", num);
        return 0;
    }


    int pow10 = 1;
    for (int i = 0; i < digits; i++) {
        pow10 *= 10;
    }

    
    int middle = (num % pow10) / 10;

    
    int swapped = last * pow10 + middle * 10 + first;

    printf("%d\n", swapped);
    return 0;
} 
