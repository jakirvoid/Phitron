#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    queue<int> q;
    int n,m;

    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        st.push(val);
    }

    
    for(int i=0;i<m;i++){
        int val;
        cin >> val;
        q.push(val);
    }

    if(n==m){
        
        int cnt = 0;

        while(!st.empty() && !q.empty()){
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                cnt++;
            }
            else {
                cnt = 0;
                break;
            }
        }

        cout<<((cnt == n) ? "YES" : "NO");
    }
    else {
        cout << "NO";
    }



    return 0;
}