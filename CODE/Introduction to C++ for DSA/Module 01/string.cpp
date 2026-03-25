#include<iostream>
using namespace std;

int main(){

    int  x;
    cin >> x;
    cin.ignore();

    char a[100];
    cin.getline(a,100);
    cout<< x << a << endl;

    string s;
    cin>> s;
    cout<< s;



    return 0;
}