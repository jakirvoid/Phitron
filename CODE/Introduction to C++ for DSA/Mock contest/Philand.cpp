#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int l =s.size();
    
    for(int i=0;i<l;i++){
        s[i]=tolower(s[i]);
    }

    reverse(s.begin(),s.end());

    cout << s;

    return 0;
}