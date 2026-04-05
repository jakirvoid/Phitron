#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    if(a<b){
        cout << b*2-1;
    }
    else if(a>b){
        cout << a*2-1;
    }
    else{
        cout << a*2;
    }


    return 0;
}