#include<bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool vis[10005];

void bfs_print(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int pnt = q.front();
        q.pop();
        
        cout << pnt <<" ";

        for(int child : v[pnt]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main(){

    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));

    return 0;
}