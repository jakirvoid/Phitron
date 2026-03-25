#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int x;
    scanf("%d",&x);

    int coun=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                coun++;
                break;
            }
        }
    }

    if(coun==1){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}