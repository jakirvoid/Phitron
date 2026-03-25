#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
    
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum += ceil((double)a[i]/2);    
        }

        cout<< sum <<endl;

    }

    return 0;
}
