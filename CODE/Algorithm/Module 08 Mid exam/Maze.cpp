#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[1005][1005];
pair<int,int> parent[1005][1005];
bool vis[1005][1005];
int lvl[1005][1005];
vector<pair<int,int>> mov = {{0,1},{0,-1},{1,0},{-1,0}};

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


        for(int i=0;i<4;i++){
            int ci = p_i + mov[i].first;
            int cj = p_j + mov[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#'){
                q.push({ci,cj});
                lvl[ci][cj] = lvl[p_i][p_j] + 1;
                vis[ci][cj] = true;
                parent[ci][cj] = {p_i,p_j};
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
    memset(vis,false,sizeof(vis));
    memset(lvl,-1,sizeof(lvl));

    int ri,rj,di,dj;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='R'){
                ri = i;
                rj = j;
            }
            if(grid[i][j]=='D'){
                di = i;
                dj = j;
            }
        }
    }
    bfs(ri,rj);

    if(vis[di][dj]){
        while(true){
        
        pair<int,int> p = parent[di][dj];
        di = p.first;
        dj = p.second;

        
        if(grid[di][dj]=='R'){
            break;
        }
        grid[di][dj] = 'X';
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << grid[i][j];
            }
        cout<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << grid[i][j];
        }
        cout<<endl;
    }
    }
    

    return 0;
}