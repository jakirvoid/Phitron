#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[105][105];
bool vis[105][105];
int lvl[105][105];
vector<pair<int,int>> mov = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

bool valid(int ci, int cj){
    if(ci<0 || ci>= n || cj <0 || cj>= m){
        return false;
    }
    return true;
}

void bfs(int si, int sj){
    lvl[si][sj]=0;
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        int p_i = p.first;
        int p_j = p.second;

        for(int i=0;i<8;i++){
            int ci = p_i + mov[i].first;
            int cj = p_j + mov[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                lvl[ci][cj] = lvl[p_i][p_j] + 1;
                vis[ci][cj] = true;
            }
        }
    }

}

int main(){

    int t;
    cin >> t;

    while(t--){
        cin >> n >> m;

        int ki,kj,qi,qj;
        cin >> ki >> kj >> qi >> qj;

        memset(vis,false,sizeof(vis));
        memset(lvl,-1,sizeof(lvl));
        
        bfs(ki,kj);
        cout << lvl[qi][qj]<<endl;

    }

    return 0;
}