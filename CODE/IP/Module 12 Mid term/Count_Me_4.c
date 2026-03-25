#include<stdio.h>
#include<string.h>
int main(){

    char s[10001];
    scanf("%s",s);

    int length=strlen(s);

    int fre[26]={0};
    for(int i=0;i<length;i++){
        int val=s[i]-'a';
        fre[val]++;
    }

    for(int i=0;i<26;i++){
        if(fre[i]!=0){
            printf("%c - %d\n",'a'+i,fre[i]);
        }
    }
    

    return 0;
}