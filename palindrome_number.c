#include <stdio.h>
int main() {
    int num, ori, rem;
    int rev = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    ori = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (ori == rev) {
        printf("%d is a palidrome number.\n", ori);
    }
    else {
        printf("%d is not a palidrome number.\n", ori);
    }
    printf("By Raman Raj\n");
    return 0;
}