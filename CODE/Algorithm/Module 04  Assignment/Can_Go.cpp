#include<bits/stdc++.h>
using namespace std;

int n,e;
bool flg = false;
char mp[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> mv = {{0,-1},{0,1},{1,0},{-1,0}};
bool valid(int ci, int cj){
    if(ci<0 || ci>= n || cj <0 || cj>= e){
        return false;
    }
    return true;
}
void dfs(int ai, int aj){
    // kaaj
    vis[ai][aj] = true;
    for(int i=0;i<4;i++){
        int ci = ai + mv[i].first;
        int cj = aj + mv[i].second;

        if(mp[ci][cj]=='B'){
            flg = true;
        }
        else if((valid(ci,cj) && !vis[ci][cj]) && 
        (mp[ci][cj]=='.'))
        {
            dfs(ci,cj);
        }
    }
}

int main(){

    
    cin >> n >> e;

    memset(vis,false,sizeof(vis));

    for(int i=0;i<n;i++){
        for(int j=0;j<e;j++){
            cin >> mp[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<e;j++){
            if(mp[i][j]=='A'){
                dfs(i,j);
            }
        }
    }
    cout<<(flg ? "YES" : "NO");


    return 0;
}