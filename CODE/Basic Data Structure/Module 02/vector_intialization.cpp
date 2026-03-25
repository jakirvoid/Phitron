#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v; // type One
    //vector<int> v(5); // type two
    //vector<int> v(5,3); // type three
    //vector<int> v2(v); //type four
    // int a[5]={1,2,3,4,5};
    // vector<int> v(a,a+5); // type five

    vector<int> v={1,2,3,4,5};
    int l = v.size();

    cout<< v.size()<<endl;
    for(int i=0;i<l;i++){
        cout<< v[i] <<" ";
    }

    return 0;
}