#include<stdio.h>

void fun(int x[]){
    x[4]=200;
}

void fun_two(int y[],int z){
    for(int i=0;i<z;i++){
        printf("%d ",y[i]+1);
    }
}

int main(){

    int a[5]={10,20,30,40,50};

    fun(a);

    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    int n;
    scanf("%d",&n);

    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    fun_two(b,n);

    return 0;
}