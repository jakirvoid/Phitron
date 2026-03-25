#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[10005];
vector<bool> vis(10005,false);
vector<int> parent_lvl(10005,-1);
vector<bool> path_vis(10005,false);
bool cycle = false;

void dfs(int src){
    vis[src] = true;
    path_vis[src] = true;

    for(int child : adj_list[src]){
        if(path_vis[child] && vis[child]){
            cycle = true;
        }
        if(!vis[child]){
            parent_lvl[child] = src;
            dfs(child);
        }
    }
    path_vis[src] = false;
}

int main(){

    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b;
        cin >> a >> b;
        
        adj_list[a].push_back(b);
    }

    int src;
    cin >> src;
    dfs(src);

    cout<<((cycle ? "Cycle Detacted" : "No cycle"));

    return 0;
}