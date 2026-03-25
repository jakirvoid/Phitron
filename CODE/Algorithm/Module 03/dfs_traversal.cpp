#include<bits/stdc++.h>
using namespace std;

bool vis[10005];
vector<int> adj_list[10005];

void dfs_print(int src){
    
    cout << src;
    vis[src] = true;

    for(int child : adj_list[src]){
        if(!vis[child]){
            dfs_print(child);
        }
    }
}

int main(){

    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    dfs_print(0);

    return 0;
}