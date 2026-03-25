#include<bits/stdc++.h>
using namespace std;


class myQueue{
    public:
    list<int> l;
    int sz = 0;

    void push(int val){
        l.push_front(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};

int main(){

    myQueue q;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        q.push(x); 
    }
    cout << q.front() <<" "<< q.back() <<endl;

    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }



    return 0;
}