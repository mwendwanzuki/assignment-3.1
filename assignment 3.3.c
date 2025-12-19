#include <stdio.h>

int main() {
    int count = 20;
    int *pCount;
    pCount = &count;


    *pCount = 50;         // dereference pointer and change value

    // print updated value of count
    printf("Updated value of count: %d\n", count);

    return 0;
}
