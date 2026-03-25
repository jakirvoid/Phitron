#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    vector<long long int> od;
    vector<long long int> ev;

    for(int x: v){
        if(x%2==0){
            ev.push_back(x);
        }
        else{
            od.push_back(x);
        }
    }

    sort(ev.begin(),ev.end(),greater<long long int>());
    sort(od.begin(),od.end(),greater<long long int>());

    long long int a =-1;

    if(!ev.empty())
        a = ev[0];

    if(ev.size() >=2){
        a = max(a,ev[0]+ev[1]);
    }    
    if(od.size()>=2){
        a = max(a,od[0]+od[1]);
    }
    cout << a;



    return 0;
}