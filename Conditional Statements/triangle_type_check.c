#include <stdio.h>
void main() {
    int a, b, c;
    printf("Enter the sides of triangle:   \n");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b!=c){
        printf("Triangle is isosceles\n");
    }else if(a==b && b==c){
        printf("Triangle is equilitral\n");
    }else{
        printf("Triangle is scalene\n");
    }
}