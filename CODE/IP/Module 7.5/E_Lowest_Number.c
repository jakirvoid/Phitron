#include<stdio.h>
int main(){

    int n,i;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int min=a[i],d;
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            d=i+1;
        }
    }
    printf("%d %d",min,d);

    return 0;
}