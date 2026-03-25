#include<bits/stdc++.h>
using namespace std;

int par[100005];
int grp_size[100005];
int dsu_find(int node){
    if(par[node]==-1){
        return node;
    }

    int ldr = dsu_find(par[node]);
    par[node] = ldr;
    return ldr;
}
void dsu_union(int nd,int nd2){
    int a = dsu_find(nd);
    int b = dsu_find(nd2);

    if(grp_size[a] >= grp_size[b]){
        par[b] = a;
        grp_size[a] += grp_size[b];  
    }
    else{
        par[a] = b;
        grp_size[b] += grp_size[a];
    }
}

int main(){

    int n,e;
    cin >> n >> e;
    
    memset(par,-1,sizeof(par));
    memset(grp_size,1,sizeof(grp_size));

    int cnt = 0;
    while(e--){
        int a,b;
        cin >> a >> b;

        if(dsu_find(a) != dsu_find(b)){
            dsu_union(a,b);
        }
        else{
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}