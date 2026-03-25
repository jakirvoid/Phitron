#include<bits/stdc++.h>
using namespace std;

int n,m;
char a[1005][1005];
bool vis[1005][1005];
int cnt;

vector<pair<int,int>> mov = {{1,0},{-1,0},{0,1},{0,-1}};

bool valid(int ci, int cj){
    if(ci<0 || ci>= n || cj <0 || cj>= m){
        return false;
    }
    return true;
}

void dfs(int si,int sj){
 
    vis[si][sj] = true;
    cnt++;

    for(int i=0;i<4;i++){
        int ci = si + mov[i].first;
        int cj = sj + mov[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj]=='.'){
            dfs(ci,cj);
        } 
    }

}


int main(){

    
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    memset(vis,false,sizeof(vis));
    
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && a[i][j]=='.'){
                cnt = 0;
                dfs(i,j);
                if(cnt >0){
                    mn = min(cnt,mn);
                }
            }
        }
    }

    if(cnt==0){
        cout << "-1";
    }
    else{
        cout << mn;
    }
    


    return 0;
}