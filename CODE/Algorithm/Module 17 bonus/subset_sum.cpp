#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v(1005);
int dp[1005][1005];

bool knapsack_subset_sum(int i,int sum){
  
    if(i<0){
        return (sum==0);
    }
   
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }
    
    if(sum>=v[i]){
        bool op1 = knapsack_subset_sum(i-1,sum-v[i]);
        bool op2 = knapsack_subset_sum(i-1,sum);
        dp[i][sum] = op1 || op2;
        return dp[i][sum];
    }
    else{
        return (dp[i][sum] = knapsack_subset_sum(i-1,sum));
    }

    
}


int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int sum;
    cin >> sum;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            dp[i][j] = -1;
        }
    }

    cout<<((knapsack_subset_sum(n-1,sum) ? "YES" : "NO"));


    return 0;
}