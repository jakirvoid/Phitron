#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[1005][1005]; 
bool vis[1005][1005];
vector<pair<int,int>> mov = {{1,0},{-1,0},{0,1},{0,-1}};
bool brd_flg= false; 
int brd_cnt=0,cnt=0;


bool valid(int ci, int cj){
    if(ci<0 || ci>= n || cj <0 || cj>= m){
        return false;
    }
    return true;
}
void dfs(int si,int sj){
    vis[si][sj] = true;
    if(si==0 || si== n-1 || sj ==0 || sj== m-1){
        brd_flg = true;
    }
    for(int i=0;i<4;i++){
        int ci = si + mov[i].first;
        int cj = sj + mov[i].second;
        
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='1'){
            dfs(ci,cj);
        } 
    }
}

int main(){

    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
        }
    }

    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                brd_flg = false;
                dfs(i,j);
                if(brd_flg){
                    brd_cnt++;
                }
                else{
                    cnt++;
                }
            }
        }
    }
    if(brd_cnt<=cnt){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes\n"<<brd_cnt<<" "<<cnt;
    }

    



    return 0;
}