#include <stdio.h>
void main() {
    int a;
    printf("Enter your age: \n");
    scanf("%d", &a);
    if (a>=18, a<160) {
        printf("You're eligible to vote.\n");
    }else if (a<18, a>0, a<160) {
        printf("You're not eligible to vote.\n");
    }
    else {
        printf("Invalid age.\n");
    }
}