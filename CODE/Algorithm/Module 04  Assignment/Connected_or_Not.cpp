#include<bits/stdc++.h>
using namespace std;

bool adj[1005][1005];

int main(){

    int n,e;
    cin >> n >>e;

    memset(adj,false,sizeof(adj));
    while(e--){
        int a, b;
        cin >> a >> b;
        adj[a][b] = true;
    }

    int q;
    cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;

        if(x==y){
            cout <<"YES\n";
        }
        else if(adj[x][y]){
            cout <<"YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }



    return 0;
}