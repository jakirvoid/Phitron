#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l = {1,2,3,4,5,6,7,8,9,10};

    cout << l.back() <<endl;
    cout << l.front() <<endl;
    
    l.begin();
    l.end();

    



    // range based loop
    for(int val : l){ 
        cout << val <<endl;
    }


    return 0;
}