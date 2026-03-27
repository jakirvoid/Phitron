#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int fre[26]={0};
    for(int i=0;i<n;i++){
        fre[s[i]-'a']++;
    }

    vector<pair<int,char>> odd, even;

    for(int i=0;i<26;i++){
        if(fre[i]>0){
            if(fre[i]%2==0){
                even.push_back({fre[i],char(i+'a')});
            }
            else{
                odd.push_back({fre[i],char(i+'a')});
            }
        }
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    for(int i=0;i<odd.size();i++){
        for(int j=0;j<odd[i].first;j++){
            cout<<odd[i].second;
        }
    }
    for(int i=0;i<even.size();i++){
        for(int j=0;j<even[i].first;j++){
            cout<<even[i].second;
        }
    }
    

    return 0;
}