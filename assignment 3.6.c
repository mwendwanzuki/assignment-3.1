#include <stdio.h>

void increment(int x) {
    x = x + 1;
    printf("Inside incrementByValue: x = %d\n", x);
}


void incrementByvalue(int *x) {
    *x = *x + 1;
    printf("Inside incrementByReference: *x = %d\n", *x);
}

int main() {
    int num = 10;

    printf("Original value of num: %d\n", num);


    increment(num);
    printf("After incrementByValue call: num = %d\n", num);


    incrementByvalue(&num);
    printf("After incrementByReference call: num = %d\n", num);

    return 0;
}
