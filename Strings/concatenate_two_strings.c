#include <stdio.h>

void main() {
char s1[20] = "Hi" ,s2[] = "There";
int l,j;
    l=0;
    while(s1[l] != '\0'){
        ++l;
    }
    for (j=0;s2[j];++j,++l){
        s1[l]=s2[j];
    }
    s1[l]='\0';
    printf("After concatenation: \n");
    puts(s1);
}