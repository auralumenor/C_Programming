#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a+b>c && b+c>a && c+a>b)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
    return 0;
}