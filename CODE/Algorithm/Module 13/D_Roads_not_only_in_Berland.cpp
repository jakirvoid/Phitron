#include<bits/stdc++.h>
using namespace std;

vector<int> par(1005,-1);
vector<int> grp_size(1005,1);

int dsu_find(int node){
    if(par[node]==-1){
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node,int node2){
    int a = dsu_find(node);
    int b = dsu_find(node2);

    if(grp_size[a] > grp_size[b]){
        par[b] = a;
        grp_size[a] += grp_size[b]; 
    }
    else{
        par[a] = b;
        grp_size[b] += grp_size[a];
    }
}

int main(){

    int n;
    cin >> n;

    vector<pair<int,int>> rmv;
    vector<pair<int,int>> crt;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;

        int x = dsu_find(a);
        int y = dsu_find(b);

        if(x == y){
            rmv.push_back({a,b});
        }
        else{
            dsu_union(a,b);
        }

    }
    for(int i=2;i<=n;i++){
            int leader1 = dsu_find(1);
            int leader2 = dsu_find(i);

            if(leader1 != leader2){
                crt.push_back({1,i});
                dsu_union(1,i);
            }
        }

    cout << rmv.size() <<endl;
    for(int i = 0; i < rmv.size(); i++){
        cout << rmv[i].first << " " << rmv[i].second << " "<< crt[i].first << " " << crt[i].second << endl;
    }


    return 0;
}