#include<stdio.h>
int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int fre[m];
    for(int i=0;i<m;i++){
        fre[i]=0;
    }

    for(int i=1;i<=n;i++){
        int val=a[i-1];
        fre[val-1]++;
    }

    for(int i=1;i<=m;i++){
        printf("%d\n",fre[i-1]);
    }

    return 0;
}