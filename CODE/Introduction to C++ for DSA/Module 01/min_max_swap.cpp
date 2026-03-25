#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    cout<< min(a,b)<< endl;
    cout<< min({2,344,532,a})<< endl;
    cout<< max(a,b)<< endl;
    
    swap(a,b);

    cout<< a << b;

    return 0;

}