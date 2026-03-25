#include<bits/stdc++.h>
using namespace std;

int n,e,q;
// const int N = 10005;

// void floyd_warshell(int &adj_mat[][N]){
    
// }

int main(){

    cin >> n >> e >> q;

    int adj_mat[10005][10005];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                adj_mat[i][j] = 0;
            }
            else{
                adj_mat[i][j] = INT_MAX;
            }
        }
    }
    
    
    while(e--){
        int a,b,c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b],c);
        adj_mat[b][a] = min(adj_mat[b][a],c);
    }

    

    //floyd_warshell(adj_mat);

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && adj_mat[i][k] + adj_mat[k][i] <adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    while(q--){
        int x,y;
        cin >> x >> y;

        if(adj_mat[x][y] == INT_MAX){
            cout <<"-1"<<endl;
        }
        else{
            cout << adj_mat[x][y]<<endl;
        }
    }



    return 0;
}