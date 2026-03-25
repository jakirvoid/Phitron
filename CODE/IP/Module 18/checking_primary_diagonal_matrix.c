#include<stdio.h>
int main(){

    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    if(r==c){
        int flag_zero=0,flag=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
             if(i!=j){
                if(a[i][j]==0){
                    flag_zero++;
                }
            }
            else if(i==j){
                flag++;
            }
        }
    }

    int n =r*c;
    int d= n-flag;

    if(flag_zero==d){
        printf("This is a primary diagonal matrix");
    }
    }

    else{
        printf("This is not a primary diagonal matrix");
    }

    return 0;
}