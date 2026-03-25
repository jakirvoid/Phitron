#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int,int> p;
    pair<int,int> p2;


    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i=0;i<n;i++){
        cout << v[i].first <<" "<< v[i].second<<endl;
    }

    p = make_pair(2,3);
    p2 = {3,3};

    cout << p.first<<endl;
    cout << p.second<<endl;


    return 0;
}