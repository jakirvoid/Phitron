#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin >> n >> x;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int flg=0;

    int l=0,r=n-1;

    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            flg=1;
            break;
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }




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


    return 0;
}