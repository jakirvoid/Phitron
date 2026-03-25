#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        queue<int> reverseQueue(queue<int> q){
            stack<int> st;
            while(!q.empty()){
                st.push(q.front()); 
                q.pop();
            }
            while(!st.empty()){
                q.push(st.top()); 
                st.pop();
            }
            return q;
        }
};

int main(){

    Solution ss;

    int n;
    cin >> n;

    queue<int> q;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        q.push(val);
    }

    queue<int> qq = ss.reverseQueue(q);

    while(!qq.empty()){
        cout << qq.front() <<" ";
        qq.pop();
    }
    


    return 0;
}