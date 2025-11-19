#include <stdio.h>
#include <conio.h>

int main() {
    int a[10];
    for(int i; i<10;i++){
        printf("enter the %d elements: \n",i+1);
        scanf("%d",&a[i]);

    }

    getch();

    return 0;
}