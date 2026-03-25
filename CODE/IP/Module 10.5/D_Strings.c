#include<stdio.h>
#include<string.h>
int main(){

    char a[11],b[11];
    scanf("%s %s",a,b);

    int lena= strlen(a);
    int lenb= strlen(b);
    printf("%d %d\n",lena,lenb);

    char can[22];
    strcpy(can,a);
    strcat(can,b);
    printf("%s\n", can);

    char tem;
    tem=a[0];
    a[0]=b[0];
    b[0]=tem;

    printf("%s %s\n", a, b);
    
    return 0;
}