#include<bits/stdc++.h>
using namespace std;

int par_leader[1005];
int grp_size[1005];

int dsu_find(int node){
    if(par_leader[node]==-1){
       return node; 
    }
    int ldr = dsu_find(par_leader[node]);
    par_leader[node] = ldr;
    return ldr;
}
void dsu_union(int node,int node2){
    if(grp_size[node] > grp_size[node2]){
        par_leader[node2] = node;
        grp_size[node] += grp_size[node2];
    }
    else{
        par_leader[node] = node2;
        grp_size[node2] += grp_size[node];
    }
}

int main(){

    int n,e;
    cin >> n >> e;

    memset(par_leader,-1,sizeof(par_leader));
    memset(grp_size,1,sizeof(grp_size));

    bool cycle = false;
    while(e--){
        int a,b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB){
            cycle = true;
        }
        else{
            dsu_union(a,b);
        }
    }

    if(cycle){ 
        cout <<"Cycle detected"<<endl;
    }
    else{
        cout <<"No Cycle"<<endl;
    }


    return 0;
}