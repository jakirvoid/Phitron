#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int a[n],b[n],c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }

    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            c++;
        }
    }

    if(c==n){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}