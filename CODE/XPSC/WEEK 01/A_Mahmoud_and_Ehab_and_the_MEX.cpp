#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin >> n >> x;


    int a[105];
    int fre[105];
    memset(fre,0,sizeof(fre));
    for(int i=0;i<n;i++){
        cin >> a[i];
        fre[a[i]]++;
    }
    int cnt = 0;
    if(fre[x]==0){
        fre[x] = 1;
    }
    else{
        cnt++;
    }
    for(int i=0;i<x;i++){
        if(fre[i]==0){
            cnt++;
        }

    }
    
    cout << cnt;



    return 0;
}