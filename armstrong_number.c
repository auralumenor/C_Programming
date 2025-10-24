#include <stdio.h>
int main() {
    int num, orignal, sum = 0;
    printf("Enter a three-digit number: \n");
    scanf("%d", &num);
    orignal = num;
    while (num != 0) {
        int digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }
    if (sum == orignal) {
        printf("%d is an Armstrong number.\n", orignal);
    } else {
        printf("%d is not an Armstrong number.\n", orignal);
    }
    return 0;
}