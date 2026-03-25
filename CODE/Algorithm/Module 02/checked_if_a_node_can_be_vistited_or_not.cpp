#include<bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool vis[10005];

void checked(int src){
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int p = q.front();
        q.pop();

        ///

        for(int c : v[p]){
            if(!vis[c]){
                q.push(c);
                vis[c] = true;
            }
        }
    }
}

int main(){

    int n,e;
    cin >> n >> e;


    while(e--){
        int a , b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));

    int src, dst;
    cin >> src >> dst;

    checked(src);

    cout <<(vis[dst] ? "YES" : "NO");



    return 0;
}