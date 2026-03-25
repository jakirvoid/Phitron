#include<bits/stdc++.h>
using namespace std;

vector<int> v[10005];
vector<int> lv(10005,-1);
bool vis[10005];

void shortest_distance(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lv[src] = 0; 

    while(!q.empty()){
        int p = q.front();
        q.pop();

        // ----

        for(int c : v[p]){
            if(!vis[c] ){
                q.push(c);
                vis[c] = true;
                lv[c] = lv[p]+1;
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

    int src,dis;
    cin >> src >> dis;

    shortest_distance(src);
    cout << lv[dis];

    return 0;
}
// 0 1
// 1 3
// 1 4
// 3 2
// 3 5
// 2 5
// 5 6