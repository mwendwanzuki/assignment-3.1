#include <stdio.h>

int main() {
    int num = 20;        // declare integer variable and assign value
    int *ptr;            // declare integer pointer
    ptr = &num;          // store address of num in pointer

    // Display required values
    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Address of num: %p\n", &num);
    printf("Value accessed using *ptr (dereferenced value): %d\n", *ptr);

    return 0;
}
