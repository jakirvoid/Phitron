#include<bits/stdc++.h>
using namespace std;


bool check(string s){
    stack<char> st;
    for(char c : s){
        if(c == '1'){
            if(!st.empty() && st.top()=='0'){
                st.pop();
            }
            else 
                st.push(c);
        }
        else if (c == '0'){
            if(!st.empty() && st.top()=='1'){
                st.pop();
            }
            else 
                st.push(c);
        }
    }

    return st.empty();
}

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        cout << (check(s) ? "YES" :"NO")<<endl;
    }


    return 0;
}