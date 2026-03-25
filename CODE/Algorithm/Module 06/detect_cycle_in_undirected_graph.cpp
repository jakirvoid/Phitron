#include<bits/stdc++.h>
using namespace std;

vector<int> al[1005];
vector<int> prt_lvl (1005,-1);
bool vis[1005];
bool cycle;

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;

    
    while(!q.empty()){
        int par = q.front();
        q.pop();
        
        
        for(int child : al[par]){

            if(vis[child] && prt_lvl[par] != child){
                cycle = true;
            }
            // current node er parent level jodi cild er soman hoy taile cycle nah
            if(!vis[child]){
                q.push(child);
                vis[child] = true; 
                prt_lvl[child] = par;
                cout << child <<" : " << prt_lvl[child] << endl;
            }
        }
    }
}

int main(){

    int n,e;
    cin >> n >> e;

    memset(vis,false,sizeof(cycle));

    while(e--){
        int a, b;
        cin >> a >> b;
        al[b].push_back(a);
        al[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));

    cycle = false;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    cout<<((cycle ? "Cycle detected" : "No cycle"));


    return 0;
}