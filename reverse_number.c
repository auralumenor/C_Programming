#include <stdio.h>
int main() {
    int num;
    int reversed = 0;
    int remainder;
    printf("Enter a number: \n");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
    printf("By Raman Raj\n");
    return 0;
}