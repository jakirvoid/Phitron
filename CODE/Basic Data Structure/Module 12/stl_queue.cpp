#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    list<int> l;
    stack<int> st;
    queue<int> q;

    q.push(10);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        q.push(x); 
    }
    cout << q.front() <<" "<< q.back() <<endl;

    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }


    return 0;
}