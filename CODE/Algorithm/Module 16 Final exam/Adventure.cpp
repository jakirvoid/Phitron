#include<bits/stdc++.h>
using namespace std;

int v[1005];
int w[1005];
int dp[1005][1005];

int knapsack(int i,int mw){
    if(i<0 || mw ==0){
        return 0;
    }
    if(dp[i][mw] != -1){
        return dp[i][mw];
    }
    if(w[i]<=mw){
        int op1 = knapsack(i-1,mw-w[i]) + v[i];
        int op2 = knapsack(i-1,mw);
        dp[i][mw] = max(op1,op2);
        return dp[i][mw];
    }
    else{
        dp[i][mw] = knapsack(i-1,mw);
        return dp[i][mw];
    }
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n,mw;
        cin >> n >> mw;

        for(int i=0;i<n;i++){
            cin >> w[i];
        }
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        memset(dp,-1,sizeof(dp));
        cout << knapsack(n-1,mw)<<endl;

    }


    return 0;
}