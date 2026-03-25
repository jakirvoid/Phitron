#include<bits/stdc++.h>
using namespace std;

int n,e;
long long int dis[105][105];

void floyd_warshell(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dis[i][k] != LLONG_MAX && dis[k][j] != LLONG_MAX &&   dis[i][k] + dis[k][j] < dis[i][j]){
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
}

int main(){

    cin >> n >> e;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                dis[i][j] = 0;
            }
            else{
                dis[i][j] = LLONG_MAX;
            }
        }
    }   
    while(e--){
        int a,b;
        long long int c;
        cin >> a >> b >> c;
        dis[a][b] = min(dis[a][b],c); 
    }


    floyd_warshell();

    int q;
    cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;

        if(dis[x][y] == LLONG_MAX){
            cout << "-1"<<endl;
        }
        else{
            cout << dis[x][y] <<endl;
        }
    }


    return 0;
}