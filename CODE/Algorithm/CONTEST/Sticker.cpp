#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    map<long long int,long long int> sum;
    
    for(int i=1;i<=n;i++){
        long long int x;
        cin >> x;
        sum[x] += i;
    }
    for(auto p: sum){
        cout <<p.first <<" "<<p.second<<'\n';
    }
    

    return 0;
}