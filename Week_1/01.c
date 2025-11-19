#include <stdio.h>

int main() {

    int a,b,c;
    printf("Enter the number of rows: \n");
    scanf("%d", &a);
    for(c=1;c<a;c++){
        for(b=1;b<=c;b++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}