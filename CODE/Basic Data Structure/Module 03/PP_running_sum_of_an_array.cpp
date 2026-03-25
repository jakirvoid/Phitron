#include<bits/stdc++.h>
using namespace std;

void sum(vector<int> v,int n){
    int runningSum[n];
    runningSum[0]=v[0];

    for(int i=1;i<n;i++){
        runningSum[i]=runningSum[i-1]+v[i];
    }
    
    for(int i=0;i<n;i++){
        cout << runningSum[i] <<" ";
    }
};

int main(){

    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    sum(v,n);



    return 0;
}