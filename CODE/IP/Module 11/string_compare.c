#include<stdio.h>
#include<stdbool.h>
int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);

    int i=0;
    while(true){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("Equal");
            break;
        }
        else if(a[i]=='\0'){
            printf("A smaller");
            break;
        }
        else if(b[i]=='\0'){
            printf("B smaller");
            break;
        }
        else if(a[i]<b[i]){
            printf("A smaller");
            break;
        }
        else if(b[i]<a[i]){
            printf("B smaller");
            break;
        }
        else if(a[i]==b[i]){
            i++;
        }
    }

    return 0;
}