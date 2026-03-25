#include<bits/stdc++.h>
using namespace std;

int par_leader[100005];
int grp_size[100005];

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

    while(e--){
        int a,b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA != leaderB){
            dsu_union(leaderA, leaderB);
        }
    }

    vector<int> lrd;

    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(par_leader[i] == -1){
            lrd.push_back(i);
            cnt++;
        }
    }

    cout <<cnt-1<<endl;
    for(int i=0;i<cnt-1;i++){
        cout << lrd[i] <<" "<<lrd[i+1]<<endl;
    }



    return 0;
}