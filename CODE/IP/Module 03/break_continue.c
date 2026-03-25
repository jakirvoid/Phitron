#include<stdio.h>

int main(){
    
    int a=20;

    for(int i=0;i<a;i++){
        if(i==10||i==15){
            continue;
        }
        else if(i==19){
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}