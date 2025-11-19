#include <stdio.h>

int main() {

    int i,f,j,a[6];
    for (i=0,f=1;i<6,f<7;i++,f++){
        printf("Enter the %dth value: \n",f);
        scanf("%d", &a[i]);
    }
    
    for (i=0,j=1;i<6,j<7;i++,j++){
        printf("The sum of %dth and %dth element is %d\n",i,j, a[i]+a[j]);
    }

    printf("The sum of all elements is %d \n",a[0]+a[1]+a[2]+a[3]+a[4]+a[5]);
    return 0;
}