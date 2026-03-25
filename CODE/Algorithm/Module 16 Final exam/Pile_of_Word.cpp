#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        string s, s2;
        cin >> s >> s2;

        sort(s.begin(),s.end());
        sort(s2.begin(),s2.end());

        cout<<(((s==s2) ? "YES\n":"NO\n"));

    }


    return 0;
}