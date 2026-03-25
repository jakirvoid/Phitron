#include<stdio.h>
int main(){
 
    int p;
    float x;
    scanf("%f %d",&x,&p);
    x=x/100;
 
    printf("%.2f",p/(1-x));
 
    return 0;
}