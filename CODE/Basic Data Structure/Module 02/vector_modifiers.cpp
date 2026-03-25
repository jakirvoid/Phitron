#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={1,2,3};
    vector<int> v2={23,532,12,46};
    // v2 = v; 

    v.pop_back();
    v.push_back(12);
    v.insert(v.begin()+2,100);
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    // v.erase(v.begin()+2);
    // v.erase(v.begin(),v.begin()+1);

    replace(v.begin(),v.end(),2,100);
    auto it = find(v.begin(),v.end(),100);
    
    cout << (it==v.end()) ? "not found" : "found" ;
   

    return 0;
}