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
    int leader1 = dsu_find(node);
    int leader2 = dsu_find(node2);

    if(grp_size[leader1] >= grp_size[leader2]){
        par_leader[leader2] = leader1;
        grp_size[leader1] += grp_size[leader2];
    }
    else{
        par_leader[leader1] = leader2;
        grp_size[leader2] += grp_size[leader1];
    }
}

int main(){

    memset(par_leader,-1,sizeof(par_leader));
    memset(grp_size,1,sizeof(grp_size));

    dsu_union(1,2);
    dsu_union(3,5);
    dsu_union(2,6);
    dsu_union(6,0);

    for(int i=0;i<8;i++){
        cout << i <<" -> "<< par_leader[i]<<endl;
    }


    return 0;
}