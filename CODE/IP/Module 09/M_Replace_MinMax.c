#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int min=a[0],max=a[0],min_idx=0,max_idx=0;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            min_idx=i;
        }
        if(max<a[i]){
            max=a[i];
            max_idx=i;
        }
    }
    
    int temp;
    temp=a[min_idx];
    a[min_idx]=a[max_idx];
    a[max_idx]=temp;

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}