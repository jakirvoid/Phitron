#include<bits/stdc++.h>
using namespace std;

int mx = 1;
vector<int> par(100005,-1);
vector<int> grp_size(100005,1);

int dsu_find(int node){
    if(par[node]==-1){
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node,int node2){
    int leaderA = dsu_find(node);
    int leaderB = dsu_find(node2);
    
    if(grp_size[leaderA] > grp_size[leaderB]){
        par[leaderB] = leaderA;
        grp_size[leaderA] += grp_size[leaderB];
        mx = max(mx,grp_size[leaderA]);
    }
    else{
        par[leaderA] = leaderB;
        grp_size[leaderB] += grp_size[leaderA];
        mx = max(mx,grp_size[leaderB]);
    }
}

int main(){
    
    int n,e;
    cin >> n >> e;
    int cnp = n;
    
    while(e--){
        int a, b;
        cin >> a >> b;
        
        if(dsu_find(a) != dsu_find(b)){
            dsu_union(a,b);
            cnp--;
        }
       
        
        cout << cnp <<" "<< mx <<endl;
    }


    return 0;
}