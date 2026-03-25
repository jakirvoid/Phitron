#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
vector<bool> vis(100005,false);

void dfs(int src){
    vis[src] = true;

    for(int c: adj_list[src]){
        if(!vis[c]){
            dfs(c);
        }
    }
}

int main(){
    
    int n,m;
    cin >> n >> m;
    
    while(m--){
        int a,b;
        cin >> a >>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    int cnt = 0;
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
            v.push_back(i);
        }
    }

    cout << cnt - 1 << endl;
    for(int i=0;i<cnt-1;i++){
        cout << v[i] <<" "<< v[i+1];
    }


    return 0;
}