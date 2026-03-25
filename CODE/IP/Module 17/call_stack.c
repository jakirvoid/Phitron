#include<stdio.h>

void mello(){
    printf("Mello\n");
}
void Gello(){
    printf("Gello\n");
    mello();
}
void hello(){
    printf("Hello\n");
    Gello();
}


int main(){

    printf("Hi\n");
    hello();

    return 0;
}