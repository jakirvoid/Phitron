#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        stack<int> insert_at_bottom(stack<int> st,int x){
            stack<int> new_st;
            while(!st.empty()){
                    new_st.push(st.top());
                    st.pop();
            }
            st.push(x);
            while(!new_st.empty()){
                    st.push(new_st.top());
                    new_st.pop();
            }
            return st;

        }

};

int main(){

    Solution ss;

    stack<int> myStack;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        myStack.push(val);
    }
    int x;
    cin >> x;
    stack<int> st = ss.insert_at_bottom(myStack,x);

    while(!st.empty()){
        cout << st.top() <<" ";
        st.pop();
    }
    


    return 0;
}