#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int,vector<int>,greater<int>> pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq_pair;

    pq_pair.push({10,2});
    pq_pair.push({5,1});

    cout << pq_pair.top().first <<" "<<pq_pair.top().second;

    return 0;
}