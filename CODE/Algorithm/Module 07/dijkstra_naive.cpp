#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj_list[1000];
vector<int> dis(1000,INT_MAX);

void dijkstra(int src){
    queue<pair<int,int>> q;
    q.push({src,0});
    dis[src] = 0; 

    while(!q.empty()){
        int p_node= q.front().first;
        int p_dis= q.front().second;
        q.pop();

        for(auto c : adj_list[p_node]){
            int c_node = c.first;
            int c_dis = c.second;

            if(p_dis+c_dis <dis[c_node]){
                dis[c_node] = p_dis + c_dis; 
                q.push({c_node,dis[c_node]});
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

    dijkstra(0);

    for(int i=0;i<n;i++){
        cout << i <<" -> " << dis[i]<<endl;
    }


    return 0;
}