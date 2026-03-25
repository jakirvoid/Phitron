#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }


    for(int i=0;i<n;i++){
        if(i>0){
            cout <<" ";
        }
        cout <<((v[i]==0) ? "0" : (v[i]<0 ? "2" : "1")); 
    }


    return 0;
}