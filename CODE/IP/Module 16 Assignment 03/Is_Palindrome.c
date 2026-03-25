#include<stdio.h>
#include<string.h>

int is_palindrome(char a[]){
    int x=strlen(a);
    char b[x];
    for(int i=0;i<x;i++){
        b[i]=a[x-i-1];
    }
    int count=0;
    for(int i=0;i<x;i++){
        if(b[i]==a[i]){
            count++;
        }
    }
    int cnt;
    if(count==x){
        cnt=1;
    }
    else{
        cnt=0;
    }

    return cnt;
}

int main(){

    char s[1000];
    scanf("%s",s);

    int check= is_palindrome(s);
    if(check==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}