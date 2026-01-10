#include <stdio.h>

int main() {

    FILE *ptr;
    ptr = fopen("start.txt","r");
    int a;
    fscanf(ptr,"%d",&a);
    printf("Get value %d\n",a);
    return 0;
}