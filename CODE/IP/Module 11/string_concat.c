#include<stdio.h>
#include<string.h>
int main(){

    char a[101],b[101];
    scanf("%s %s",a,b);

    printf("%s %s\n",a,b);

    int len=strlen(a);
    int len_b=strlen(b);

    for(int i=0;i<=len_b;i++){
        a[len+i]=b[i];
    }

    printf("%s %s\n",a,b);

    strcat(a,b);
    printf("%s %s",a,b);

    return 0;
}