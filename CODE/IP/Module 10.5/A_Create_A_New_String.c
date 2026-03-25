#include<stdio.h>
#include<string.h>
int main(){

    char a[1001],b[1001];
    scanf("%s %s",a,b);

    int len_a=strlen(a);
    int len_b=strlen(b);

    printf("%d %d\n%s %s",len_a,len_b,a,b);

    return 0;
}