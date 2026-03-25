#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    
    int m1,m2,d;
    for(int i=0;i<t;i++){

        scanf("%d %d %d",&m1,&m2,&d);
        int m= m1+m2;     
        int l=(m1*d)/m;
     
        printf("%d\n",d-l);
    }

    return 0;
}