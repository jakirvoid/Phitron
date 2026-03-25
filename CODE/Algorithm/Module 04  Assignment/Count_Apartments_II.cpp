#include<bits/stdc++.h>
using namespace std;

int n,e;
char mp[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> mv = {{0,-1},{0,1},{1,0},{-1,0}};
int cnt = 0, nd_cnt = 0;

bool valid(int ci, int cj){
    if(ci<0 || ci>= n || cj <0 || cj>= e){
        return false;
    }
    return true;
}
void dfs(int si,int sj){
    
    nd_cnt++;
    vis[si][sj] = true;
    for(int i=0;i<4;i++){
        int ci = si + mv[i].first;
        int cj = sj + mv[i].second;

        if(valid(ci,cj) && !vis[ci][cj] && mp[ci][cj]=='.')
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

    vector<int> v;
    for(int i =0;i<n;i++){
        for(int j=0;j<e;j++){
            if(!vis[i][j] && mp[i][j]=='.'){
                dfs(i,j);
                v.push_back(nd_cnt);
                nd_cnt = 0;
                cnt++;
            }
        }
    }
    sort(v.begin(),v.end());


    if(v.empty()){
        cout<<"0";
    }
    else{
        for(int x : v){
            cout << x <<" ";
        }
    }

    return 0;
}