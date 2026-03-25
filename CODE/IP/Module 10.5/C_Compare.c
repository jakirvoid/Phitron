#include<stdio.h>
#include<string.h>
int main(){

    char a[21],b[21];
    scanf("%s %s",a,b);

    int cmp=strcmp(a,b);

    if(cmp>=0){
        printf("%s",b);
    }
    else{
        printf("%s",a);
    }

    return 0;
}