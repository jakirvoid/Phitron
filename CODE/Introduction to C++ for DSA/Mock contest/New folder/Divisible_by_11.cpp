#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int l= s.size();

    int evn_cnt=0,odd_cnt=0;
    for(int i=0;i<l;i++){
        int d = s[i] - '0';
        if((l-i)%2==0){
            evn_cnt += d;
        }
        else{
            odd_cnt += d;
        }
    }

    if((odd_cnt-evn_cnt)%11==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}