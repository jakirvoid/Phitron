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

    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    
    // for(int i=0;i<r;i++){
    //    if(i==x){
    //     for(int j=0;j<c;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //    }
    // }

    for(int i=0;i<c;i++){
        printf("row %d ",a[x][i]);
    }

    printf("\n");

    for(int i=0;i<r;i++){
        printf("col %d ",a[i][y]);
    }

    return 0;
}