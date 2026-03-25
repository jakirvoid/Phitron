#include<bits/stdc++.h>
using namespace std;

class edge{
    public:
        long long int a,b,c;
        edge(long long int a,long long int b,long long int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

int n,e;
vector<edge> edge_list;
vector<long long int> dis(1005);
bool cycle = false;

void bellmen_ford(){
    for(int i=0;i<n-1;i++){
        for(auto ed: edge_list){
            long long int a = ed.a;
            long long int b = ed.b;
            long long int c = ed.c;

            if(dis[a]!=LLONG_MAX && dis[a] + c < dis[b]){
                dis[b] = dis[a] + c;
            }
        }
    }
    for(int i=0;i<1;i++){
        for(auto ed: edge_list){
            long long int a = ed.a;
            long long int b = ed.b;
            long long int c = ed.c;

            if(dis[a]!=LLONG_MAX && dis[a] + c < dis[b]){
                cycle = true;
            }
        }
    }

}

int main(){

    cin >> n >> e;

    while(e--){
        long long int a,b,c;
        cin >> a >> b >>c;

        edge_list.push_back(edge(a,b,c));

    }

    int s,t;
    cin >> s >> t;


    for(int i=1;i<=n;i++){
        dis[i] = LLONG_MAX;
    }
    
    dis[s] = 0;
    bellmen_ford();

    if(cycle){
        cout << "Negative Cycle Detected"<<endl;
    }
    else{
        while(t--){
            int d;
            cin >> d;

            if(dis[d]==LLONG_MAX){
                cout <<"Not Possible"<<endl;
            }
            else{
                cout<< dis[d]<<endl;
            }
        }
    }


    return 0;
}