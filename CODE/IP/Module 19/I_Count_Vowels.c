#include<stdio.h>
#include<string.h>

int count(char a[],int n){
    if(a[n]=='\0'){
        return 0;
    }
    int flag=0;
    if(a[n]=='a'||a[n]=='e'||a[n]=='i'||a[n]=='o'||a[n]=='u'||
        a[n]=='A'|| a[n]=='E'||a[n]=='O'||a[n]=='I'||a[n]=='U'){
            flag++;
    }
    return count(a,n+1) + flag;

}
int main(){

    char a[201];
    fgets(a,201,stdin);

    int total = count(a,0);
    printf("%d",total);

    return 0;
}