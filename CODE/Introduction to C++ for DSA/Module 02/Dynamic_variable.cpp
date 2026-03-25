#include<bits/stdc++.h>
using namespace std;

int *p;

void fun(){
    int x=10;
    p=&x;
    cout<< "fun-> "<< *p <<endl;
    return;
}

void fun_2(){
    int *x= new int;
    *x=10;
    p=x;
    cout<< "Dynamic fun-> "<< *p <<endl;
    return;
}

int main(){

    int x=10;

    int *p= new int;
    *p=100;
    cout<< *p << " " << x <<"\n";

    fun();
    cout<< "Main-> "<< *p <<endl;


    return 0;
}