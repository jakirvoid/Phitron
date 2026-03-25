#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj_list[1000];
vector<int> dis(1000,INT_MAX);

void dijakstra(int src){
    dis[src] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});

    while(!pq.empty()){
        auto p_dis = pq.top().first;
        auto p_node = pq.top().second;
        pq.pop();
        for(auto c : adj_list[p_node]){
            int c_node = c.first;
            int c_dis = c.second;
            if(p_dis + c_dis < dis[c_node]){
                dis[c_node] = c_dis + p_dis;
                pq.push({dis[c_node],c_node});
            }
        }
    }
}

int main(){

    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    dijakstra(0);

    for(int i=0;i<n;i++){
        cout << i <<" -> " <<dis[i]<<endl;
    }
    // 0 1 10
    // 1 2 1
    // 0 2 7
    // 0 3 4
    // 2 3 1
    // 3 4 5
    // 1 4 3
    // 2 4 5


    return 0;
}