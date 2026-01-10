#include <stdio.h>
int main(){
    int sum=0,i,a[10];
    for(i=0;i<10;i++){
        printf("Enter the %d element: \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("the sum is %d\n",sum);
    return 0;
}