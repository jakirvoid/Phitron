#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

        long long int d=(a*b*c);

        if(m%d==0){
            printf("%lld\n",m/(a*b*c));
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}