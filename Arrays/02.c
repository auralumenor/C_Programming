#include <stdio.h>

int main() {

    int a[7],q,e,f;
    for(q=0,e=1;q<7,e<8;q++,e++){
    printf("Enter the %dth element: \n",e);
    scanf("%d",&a[q]);
    }
    for(q=0,e=1;q<7,e<8;q++,e++){
        if(a[q]>a[e]){
            f=a[q];
        }
        else if(a[q]<a[e]){
            f=a[e];
        }
    }
    printf("the greatest element of the array is %d",f);
    return 0;
}