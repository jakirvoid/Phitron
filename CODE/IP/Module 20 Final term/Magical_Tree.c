#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int x= n/2+6;

    for(int i=1;i<=x;i++){
        for(int j=x-i;j>=1;j--){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}