#include<stdio.h>
int main(){

    int ar[5];
    ar[2]=10;
    ar[3]=15;
    ar[2]=20;

    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("%d ",ar[2]);
    
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}