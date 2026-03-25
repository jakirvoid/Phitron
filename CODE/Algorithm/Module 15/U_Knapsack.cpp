#include<bits/stdc++.h>
using namespace std;

int n,mw;
vector<int> val(25);
vector<int> weight(105);
int dp[25][105];

int knapsack(int i,int mw){
    if(i<0 || mw == 0){
        return 0;
    }
    if(dp[i][mw] != -1){
        return dp[i][mw];
    }
    else{
        if(weight[i]<=mw){
            int op1 = knapsack(i-1,mw-weight[i]) + val[i];
            int op2 = knapsack(i-1,mw);
            return dp[i][mw] = max(op1,op2);
        }
        else{
            return dp[i][mw] = knapsack(i-1,mw);
        }
    }
}

int main(){

    cin >> n >> mw;

    for(int i=0;i<n;i++){
        cin >> weight[i];
        cin >> val[i];
    }

    memset(dp,-1,sizeof(dp));

    cout << knapsack(n-1,mw);

    return 0;
}