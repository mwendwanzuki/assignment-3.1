#include <stdio.h>

int main() {
    int count = 20;
    int *pCount;
    pCount = &count;


    *pCount = 50;        
    
    printf("Updated value of count: %d\n", count);

    return 0;
}

