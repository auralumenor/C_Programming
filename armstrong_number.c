#include <stdio.h>
#include <math.h>
int main() {
    int num;
    int orignal;
    int remainder;
    int n = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    orignal = num;
    orignal = num;
    while (orignal != 0) {
        orignal /= 10;
        ++n;
    }
    orignal = num;
    int result = 0;
    while (orignal != 0) {
        remainder = orignal % 10;
        result += pow(remainder, n);
        orignal /= 10;
        ++n;
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    printf("By Raman Raj\n");
    return 0;
}