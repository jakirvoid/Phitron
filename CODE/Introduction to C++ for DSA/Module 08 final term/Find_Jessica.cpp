#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,w;
    getline(cin,s);

    stringstream ss(s);
    int flg=0;
    while(ss >> w){
        if(w == "Jessica"){
            flg++;
        }
    }

    if(flg>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
       

    
    
    return 0;
}