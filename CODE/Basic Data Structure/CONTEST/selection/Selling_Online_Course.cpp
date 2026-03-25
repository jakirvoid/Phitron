#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin >> n;

    if(n==0){
        cout << 0;
    }
    else {\
        long long int s = (500 + n - 1)/n;
        cout <<s;
    }
    return 0;
}