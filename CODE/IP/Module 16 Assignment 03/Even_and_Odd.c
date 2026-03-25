#include<stdio.h>

void odd_even(){
    
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0 || a[i]==0){
            pos++;
        }
        else if(a[i]%2!=0){
            neg++;
        }
    }

    printf("%d %d",pos,neg);
}


int main(){

    odd_even();

    return 0;
}