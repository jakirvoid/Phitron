#include<stdio.h>

int count_before_one(int b[],int x){
    int count=0;
    for(int i=0;i<x;i++){
        if(b[i]!=1){
            count++;
        }
        else{
            break;
        }
    }

    return count;

}


int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int total= count_before_one(a,n);
    printf("%d",total);

    return 0;
}