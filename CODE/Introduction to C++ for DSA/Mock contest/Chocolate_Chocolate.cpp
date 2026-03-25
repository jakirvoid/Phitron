#include<bits/stdc++.h>
using namespace std;

int cho_cnt(int m){
    if(m<3){
        return 0;
    }
    int a = m/3;
    
    return a + cho_cnt(a);
}
int main(){

    int n;
    cin >> n;

    int m = n/5;
    int b = cho_cnt(m);

    cout<< m+b;


    return 0;
}