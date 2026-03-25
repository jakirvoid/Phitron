#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int sum_pos=0,sum_nag=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            sum_pos+=a[i];
        }
        else{
            sum_nag+=a[i];
        }
    }
    
    printf("%d %d",sum_pos,sum_nag);

    return 0;
}