#include<bits/stdc++.h>
using namespace std;

bool vis[10005];
vector<int> adj_list[10005];
int cnt = 0, nd_cnt = 0;

void dfs_print(int src){
    
    nd_cnt++;
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

    vector<int> v;
    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs_print(i);
            v.push_back(nd_cnt);
            nd_cnt = 0;
            cnt++;
        }
    }
    sort(v.begin(),v.end());

    cout << cnt <<endl;
    for(int x : v){
        cout << x <<" ";
    }

    return 0;
}