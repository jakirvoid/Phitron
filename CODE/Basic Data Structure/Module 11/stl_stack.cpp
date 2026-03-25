#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    list<int> l;
    stack<int> st;

    // st.pop();
    // st.push(1);
    // st.size();
    // st.top();
    // st.empty();

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        st.push(x);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}