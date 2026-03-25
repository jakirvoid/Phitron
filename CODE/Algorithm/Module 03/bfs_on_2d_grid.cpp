#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> mov = {{1,0},{-1,0},{0,1},{0,-1}};

bool valid(int ci, int cj){
    if(ci<0 || ci>= n || cj <0 || cj>= m){
        return false;
    }
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        int p_i = p.first;
        int p_j = p.second;

        cout << p_i << " " << p_j <<endl;

        for(int i=0;i<4;i++){
            int ci = p_i + mov[i].first;
            int cj = p_j + mov[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }

}

int main(){


    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid [i][j];
        }
    }

    int si,sj;
    cin >> si >> sj;

    memset(vis,false,sizeof(vis));

    bfs(si,sj);

    return 0;
}