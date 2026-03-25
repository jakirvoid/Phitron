#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int x;
	    cin>>x;
        
        if(x==0){
            cout<<"0"<<endl;
        }
	    else if(x>=1 && x<=4){
            cout<<"1"<<endl;
        }
        else if(x%4==0){
            int c = x/4;
            cout<<c<<endl;
        } 
        else{
            int c = 1+x/4;
            cout<<c<<endl;
        }
    }

}
