#include <stdio.h>
int externVar = 10;
void staticDemo() {
    static int count = 0;
    count++;
    printf("Static variable count = %d\n", count);
}
void autoDemo() {
    auto int num = 5;
    printf("Auto variable num = %d\n", num);
}
void main() {
    autoDemo();
    autoDemo();
    staticDemo();
    staticDemo();
    staticDemo();
    printf("Extern variable externVar = %d\n", externVar);
    externVar += 5;
    printf("Extern variable after modification = %d\n", externVar);
}