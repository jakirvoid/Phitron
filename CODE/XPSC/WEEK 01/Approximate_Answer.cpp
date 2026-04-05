#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,k;
    cin >> x >> y >> k;

    
    if(abs((abs(x)-abs(y)))<=k){
        cout <<"Yes\n";
    }
    else{
        cout <<"No\n";
    }

    return 0;
}