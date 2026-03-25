#include<stdio.h>
int main(){
 
    int n;
    scanf("%d",&n);
 
    int a[n],b,c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 
    scanf("%d",&b);
 
    for(int i=0;i<n;i++){
        if(a[i]==b){
            printf("%d",i);
            break;
        }
        else{
            c++;
        }
    }
    if(c==n){
        printf("-1");
    }
 
    return 0;
}