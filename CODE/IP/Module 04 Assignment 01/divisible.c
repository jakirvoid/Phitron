#include<stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    if(N>=0){
        if(N%3==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}