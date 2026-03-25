#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s,x;
        cin >> s >> x;

        int idx = s.find(x);

        while(idx != string::npos){
            s.replace(idx,x.size(),"#");
            idx = s.find(x,idx+1);
        }

        cout << s<<endl;
    }

    
    
    return 0;
}