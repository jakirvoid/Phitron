#include<stdio.h>
#include<string.h>
int main(){

    char b[100001];
    scanf("%s",b);

    int length=strlen(b),c=0;

    for(int i=0;i<length;i++){
        if(b[i]== 'a'|| b[i]=='e'||b[i]=='i'|| b[i]=='o' || b[i]=='u'){
            c++;
        }
    }

    printf("%d",length-c);
    return 0;
}