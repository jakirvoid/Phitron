#include<stdio.h>

int main(){

    int a,b;

    if(a==b){
        printf("Both are equal");
    }
    else if (a>b){
        printf("a is greater b");
        
        if(a<1000){
            printf("a is less than 1000");
        }
    }
    else if (a<b){
        printf("b is greater then a");
    }
    else{
        printf("Invalid");
    }

    return 0;
}