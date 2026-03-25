#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[10][10];

int sum(int i,int j){
    
}

int main(){

    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    cout << sum(n,m);

    return 0;
}