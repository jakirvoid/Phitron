#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int fre[26] ={0};

    for(int i=0;i<=s.length()-1;i++){
        fre[s[i]-'a']++;
    }
    char x;
    bool flg = false;
    for(int i=0;i<26;i++){
        if(fre[i]==0){
            x = char(i+'a');
            flg = true;
            break;
        }
    }
    if(flg){
        cout << x;
    } 
    else{
        cout <<"None";
    } 
    return 0;
}