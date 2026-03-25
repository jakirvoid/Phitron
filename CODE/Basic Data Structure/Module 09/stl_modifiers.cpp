#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l = {1,2,3,4,5,6,7,8,9,10};
    // l.push_back(10);
    // l.push_front(20);
    // l.pop_back();
    // l.pop_front();
    // next(l.begin(),2);
    // cout << *next(l.begin(),0)<<endl;
    // l.insert(next(l.begin(),2),100);


    // l.erase(next(l.begin(),3));
    // l.erase(next(l.begin(),3),next(l.begin(),7)); index 3 theke 7 er ag porjonto sob delete hoye jabe

    replace(l.begin(),l.end(),3,100);

    auto it = find(l.begin(),l.end(),200);

    


    // range based loop
    for(int val : l){ 
        cout << val <<endl;
    }


    return 0;
}