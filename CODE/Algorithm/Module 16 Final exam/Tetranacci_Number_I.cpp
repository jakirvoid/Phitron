#include<bits/stdc++.h>
using namespace std;

int n;
int dp[35];

int tri(int n){
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    if(n==3){
        return 2;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = tri(n-4) + tri(n-3) + tri(n-2) + tri(n-1);
    return dp[n];
}

int main(){

    cin >> n;

    memset(dp,-1,sizeof(dp));
    cout << tri(n);


    return 0;
}