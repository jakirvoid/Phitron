#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

vector<pair<ll,ll>> adj_list[100005];
vector<ll> dis(100005,LLONG_MAX);
vector<ll> parent(100005,-1);

void dijkstra(int src){
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
    q.push({0,src});
    dis[src] = 0;

    while(!q.empty()){
        pair<ll,ll> par = q.top();
        q.pop();

        ll par_node = par.second;
        ll par_dis = par.first;

        for(auto child : adj_list[par_node]){
            ll child_node = child.first;
            ll child_dis = child.second;

            if(par_dis + child_dis < dis[child_node]){
                dis[child_node] = par_dis + child_dis;
                q.push({dis[child_node],child_node});
                parent[child_node] = par_node;
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

    dijkstra(1);

    if(dis[n]==LLONG_MAX){
        cout << "-1";
    }
    else{
        vector<ll> path;
        ll node = n;
        while(node!=-1){
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(),path.end());

        for(ll x: path){
            cout << x <<" ";
        }
    }




    return 0;
}