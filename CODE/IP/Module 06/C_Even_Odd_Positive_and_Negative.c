#include<stdio.h>
int main(){

    int a,x,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++){
        scanf("%d",&x);
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(x<0){
            neg++;
        }
        else if(x>0){
            pos++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);

    return 0;
}