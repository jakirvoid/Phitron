#include<stdio.h>
int main(){

    int a,b=0,c;
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        scanf("%d",&c);
        if(c>b){
            b=c;
        }
    }
    printf("%d",b);
    return 0;
}