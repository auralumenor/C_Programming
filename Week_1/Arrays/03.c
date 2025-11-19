#include <stdio.h>

int main() {

int a[7],i,g=0;

    for (i=0;i<7;i++){
        printf("Enter the %d value: ",i+1);
        scanf("%d", &a[i]);
    }
    for (i=0;i<7;i++){
        g=g+a[i];
    }
    printf("The sum of all the Elements is %d\n",g);
    

return 0;
    
}