#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<q;i++){
        int x;
        cin >> x;

        int flg=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                flg = 1;
            }
        }
        if(flg==1){
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }
    }

    return 0;
}