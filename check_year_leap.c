#include <stdio.h>
int main() {
    int a;
    printf("Enter the year: \n");
    scanf("%d", &a);
    if (a%4==0){
        printf("this is leap year\n");
    }
    else{
        printf("this isn't a leap year\n");
    }
    printf("By Raman Raj\n");
    return 0;

}