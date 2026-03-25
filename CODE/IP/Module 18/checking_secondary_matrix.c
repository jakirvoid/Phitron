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
        int flag=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
             if(i+j!=r-1){
                if(a[i][j]==0){
                    flag++;
                }
            }
        }
    }

    if(flag!=0){
        printf("This is a  secondary diagonal matrix");
    }
    else{
        printf("This is not a secondary diagonal matrix");
    }

    }

    else{
        printf("This is not a secondary diagonal matrix");
    }

    return 0;
}
