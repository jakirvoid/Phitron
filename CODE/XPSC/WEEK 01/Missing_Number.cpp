#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n+5];
    int fre[n+5];
    memset(fre,0,sizeof(fre));

    for(int i=0;i<n-1;i++){
        cin >> a[i];
        fre[a[i]]++;
    }

    if(n==1 || n==2){
        if(a[0]==1){
            cout << 2;
        }
        else if(a[0]==2){
            cout << 1;
        }
    }
    else{
        for(int i=2;i<=n;i++){
            if(fre[i]==0){
                cout<< i<< '\n';
                break;
            }
        }
    }


    return 0;
}