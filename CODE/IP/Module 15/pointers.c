#include<stdio.h>
int main(){

    int x= 10;
    printf("x er value %d\n",x);
    printf("x er add %p\n",&x);

    int *ptr;
    ptr= &x;

    printf("ptr= %p\n",ptr);
    printf("&ptr= %p\n",&ptr);

    return 0;
}