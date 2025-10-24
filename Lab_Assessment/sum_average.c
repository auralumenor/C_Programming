#include <stdio.h>
int main() {
    int a, b,c, d, e, sum;
    float avg;
    printf("Enter five numbers: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("the sum is %d and the average is %f\n", sum, avg);
    printf("By Raman Raj\n");
    return 0;
}