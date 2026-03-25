#include<stdio.h>

long long int fac(long long int n){
    if(n==1){
        return 1;
    }
    long long int mul = fac(n-1)*n;
    return mul;
}
int main(){

    int n;
    scanf("%d",&n);

    long long int ttl=fac(n);
    printf("%lld",ttl);
    return 0;
}