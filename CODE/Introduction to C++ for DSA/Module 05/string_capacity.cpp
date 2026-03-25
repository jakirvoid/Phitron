#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "hello asdasd";

    cout << s.size() << endl;
    cout << s.max_size() << endl; 
    cout << s.capacity() << endl;
    s.resize(6);
    cout << s << endl;
    s.clear();
    s.empty();
    return 0;
}