#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--){
        char s[6];
        for(int i=0;i<6;i++){
            cin>>s[i];
        }
       
        int flg=0;
        for(int i=0;i<6;i++){
            if(s[i]=='W'&& s[i+1]=='W' &&s[i+2]=='W'){
                flg++;
            }
        }

        if(flg>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    } 

    return 0;
}
