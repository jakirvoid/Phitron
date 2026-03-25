#include<bits/stdc++.h>
using namespace std;

class Stack{
    public: 
        list<int> l;

        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_back();
        }
        int top(){
            return l.back();
        }
        bool empty(){
            return l.empty();
        }
        int size(){
            return l.size();
        }

};


class Queue{
    public: 
        list<int> q;

        void push(int val){
            q.push_back(val);
        }
        void pop(){
            q.pop_front();
        }
        int front(){
            return q.front();
        }
        bool empty(){
            return q.empty();
        }
        int size(){
            return q.size();
        }

};
int main(){

    Stack st;
    Queue q;

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
        while(!st.empty() && !q.empty()){
            if(st.top()!=q.front()){
                cout << "NO";
                return 0;
            }
            st.pop();
            q.pop();
        }
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
    




    return 0;
}