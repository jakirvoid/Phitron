#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    
    int n = s.size();
    int idx;

    int fre[26]={0};
    for(int i=0;i<n;i++){
        fre[s[i]-'a']++;
    }

    for(int i=0;i<n;i++){
        if(fre[s[i]-'a']==1){
            cout << s[i];
            return 0;
        }
    }
    cout << "-1";

    return 0;
}
