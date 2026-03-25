#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l = {1,2,3,4,5,6,7,8,9,10};

    // l.remove(10);
    // l.sort();
    // l.sort(greater<int>());
    l.unique();
    l.reverse();



    // range based loop
    for(int val : l){ 
        cout << val <<endl;
    }


    return 0;
}