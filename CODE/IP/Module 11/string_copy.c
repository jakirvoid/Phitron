#include<stdio.h>
#include<string.h>
int main(){

    char a[101],b[101];
    scanf("%s %s",a,b);

    strcpy(b,a);
    int length= strlen(b);
    for(int i=0;i<=length;i++){
        a[i]=b[i];
    }

    printf("%s %s\n",a,b);

    
    printf("%s %s",b,a);

    return 0;
}