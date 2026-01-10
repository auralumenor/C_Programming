#include <stdio.h>

int main() {

    int a=56;
    int *p = &a;
        printf("The Address of a is %p\n",a);
        printf("The value of a is %d\n",*p);

    return 0;
}