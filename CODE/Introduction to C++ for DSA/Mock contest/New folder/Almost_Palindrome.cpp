#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cnt=0;
        int fre[26]={0};
        int l= s.size();
        for(char c:s){
            fre[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(fre[i]%2!=0){
                cnt++;
            }
        }

        int m = max(0,cnt-1);
        cout << m <<endl;
    }


    return 0;
}