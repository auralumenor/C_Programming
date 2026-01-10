#include <stdio.h>

void main() {
    int x = 42;
    int *ptr = &x;
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void*)&x);
    printf("Value of ptr (address stored) = %p\n", (void*)ptr);
    printf("Address of ptr = %p\n", (void*)&ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
}