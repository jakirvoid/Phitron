#include<stdio.h>

void fun(int *p){
    *p+=20;
    printf("fun function er x er address: %p\n",p);
}
int main(){

    int x=10;
    fun(&x);

    printf("x= %d\n",x);
    printf("Main function er x er address: %p\n",&x);
    
    int y=60;
    fun(&y);
    fun(&x);
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    return 0;
}