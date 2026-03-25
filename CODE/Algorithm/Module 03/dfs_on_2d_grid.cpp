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

void dfs(int sj,int si){
    cout << sj <<" " << si<<endl;
    vis[sj][si] = true;

    for(int i=0;i<4;i++){
        int ci = si + mov[i].first;
        int cj = sj + mov[i].second;
        if(valid(ci,cj) && !vis[ci][cj]){
            dfs(ci,cj);
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

    dfs(si,sj);

    return 0;
}