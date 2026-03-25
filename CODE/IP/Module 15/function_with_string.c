#include<stdio.h>

void fun(char x[]){
    printf("%s\n",x);
    printf("%d\n",strlen(x));

}

int main(){

    char s[10];
    scanf("%s",s);
    fun(s);

    return 0;
}