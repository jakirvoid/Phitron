#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int flg = false;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            cout << i;
            flg = true;
            break;
        }
    }
    if(!flg){
        cout<<"-1";
    }


    return 0;
}