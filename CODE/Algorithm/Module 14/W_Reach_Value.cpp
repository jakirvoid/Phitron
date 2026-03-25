#include<bits/stdc++.h>
using namespace std;

bool check(long long int n){
    if(n == 1){
        return true;
    }
    if(n%10==0 && check(n/10)){
        return true;
    }
    if(n%20==0 && check(n/20)){
        return true;
    }
    return false;
}

int main(){

    long long int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;

       cout<<((check(n) ? "YES\n":"NO\n"));
    }




    return 0;
}