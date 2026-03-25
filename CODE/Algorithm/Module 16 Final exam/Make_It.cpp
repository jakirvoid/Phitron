#include<bits/stdc++.h>
using namespace std;

int dp[100005];
bool check(int n){
    if(n==1){
        return true;
    }
    if(n<1){
        return false;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    
    bool c1,c2=false;
    c1 = check(n-3);
    if(n%2==0){
       c2 = check(n/2);
    }
    dp[n] = (c1 || c2);
    return dp[n];
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        memset(dp,-1,sizeof(dp));
        cout<<((check(n) ? "YES\n" : "NO\n"));
    }


    return 0;
}