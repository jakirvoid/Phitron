#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int flg=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flg=1;
                break;
            }
        }
    }

    cout << ((flg>0) ? "YES" : "NO" );


    return 0;
}