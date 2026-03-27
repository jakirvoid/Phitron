#include<bits/stdc++.h>
using namespace std;

vector<int> val(1005);
vector<int> weight(1005);
int dp[1005][1005];
int n,mw;


int knapsack(int i,int mw){
    if(i<0 || mw == 0){
        return 0;
    }
    if(dp[i][mw] != -1){
        return dp[i][mw];
    }
    if(weight[i]<=mw){
        int op1 = knapsack(i,mw-weight[i]) + val[i];
        int op2 = knapsack(i-1,mw);
        dp[i][mw] = max(op1,op2);
        return dp[i][mw];
    }
    else{
        return dp[i][mw] = knapsack(i-1,mw);
    }
}

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> val[i]; 
    }
    for(int i=0;i<n;i++){
        cin >> weight[i]; 
    }
    
    cin>>mw;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=mw;j++){
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n-1,mw);

    return 0;
}