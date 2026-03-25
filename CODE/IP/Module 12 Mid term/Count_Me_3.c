#include<stdio.h>
#include<string.h>
int main(){

    int t;
    scanf("%d",&t);

    char s[10001];
    for(int i=0;i<t;i++){
        scanf("%s",s);
        int length=strlen(s),cap=0,small=0,num=0;
        for(int j=0;j<length;j++){
            if( s[j]>='A' && s[j]<='Z'){
                cap++;
            }
            else if(s[j]>='a' && s[j]<='z'){
                small++;
            }
            else if(s[j]>='0' && s[j]<='9'){
                num++;
            }
        }
        printf("%d %d %d\n",cap,small,num);
    }

    return 0;
}