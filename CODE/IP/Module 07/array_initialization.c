#include<stdio.h>
int main(){

    int b[5] = {10,20};
    int a[]= {23,34,534,332};

    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",b[i]);
    }

    return 0;
}