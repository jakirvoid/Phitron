#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;
    list<int> l(10);
    list<int> l(10,3); // sob gulor value 3 hobe
    list<int> l2(l); // L theke L2 te copy hobe

    int a[]={2,3,4};
    list<int> l3(a,a+3); // a theke L3 te copy hobe
    
    vector<int> v={1,6,7};
    list<int> l4(v.begin(),v.end()); // v theke L4 te copy



    l.clear();
    l.empty();



    cout << l.size()<< endl;
    cout << *l.begin()<< endl;

    for(auto it=l.begin();it!=l.end();it++){
        cout << *it << endl;
    }

    // range based loop
    for(int val : l){ 
        cout << val <<endl;
    }


    return 0;
}