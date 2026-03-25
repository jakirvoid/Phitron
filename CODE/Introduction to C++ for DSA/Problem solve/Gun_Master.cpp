#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--){
        
        int n,d;
        cin>> n >> d;

        int a[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
        }

        int c=0;
        int cnt=0;

        for(int i=0;i<n;i++){
            if(a[i]<=d && c==1){
               c=0;
               cnt++;
            }

            else if(a[i]>d && c==0){
                c=1;
                cnt++;
            }
        }
        cout << cnt <<endl;
        

    } 

    return 0;
}
