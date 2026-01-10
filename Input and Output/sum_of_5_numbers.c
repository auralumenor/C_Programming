#include <stdio.h>
int main() {
    int a; 
    int b;
    int c;
    int d;
    int e;
    int sum;
    int avg;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);
    printf("Enter Fourth Number: ");
    scanf("%d", &d);
    printf("Enter Fifth Number: ");
    scanf("%d", &e);
    sum = a + b + c + d + e;
    avg = sum / 5;
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
    printf("Made By Raman Raj\n");
    return 0;
}