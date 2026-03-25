#include<bits/stdc++.h>
using namespace std;

bool vis[10005];
vector<int> adj_list[10005];
int cnt = 0;

void dfs_print(int src){

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

    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs_print(i);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}