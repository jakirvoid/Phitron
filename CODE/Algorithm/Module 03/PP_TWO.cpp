#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[10005];
bool vis[10005];
int nd_cnt = 0;

void dfs(int src){
    nd_cnt++;
    vis[src] = true;

    for(int c: adj_list[src]){
        if(!vis[c]){
            dfs(c);
            vis[c] = true;
        }
    }
}

int main(){

    int n, e;
    cin >> n >> e;

    while(e--){
        int a , b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    
    int dis;
    cin >> dis;
    
    dfs(dis);

    cout << nd_cnt;


    return 0;
}