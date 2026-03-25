#include<bits/stdc++.h>
using namespace std;

 int n;
long long int dp[65];

long long int tri(int n){
    
    for(int i=4;i<=n;i++){
        dp[i] = dp[i-4] + dp[i-3] + dp[i-2] + dp[i-1];
    }
    return dp[n];
}

int main(){

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    
    cout << tri(n);


    return 0;
}