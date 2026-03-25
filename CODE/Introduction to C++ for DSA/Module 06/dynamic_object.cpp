#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public: 
    string county;
    int jersey;


    Cricketer(string county,int jersey){
        this->county=county;
        this->jersey=jersey;
    }
};

int main(){

    Cricketer* dhoni = new Cricketer("India",100);
    Cricketer* kohli = new Cricketer("India",18);
    *kohli= *dhoni;
    delete dhoni;

    cout << kohli->county << " " << kohli->jersey << endl;

    return 0;
}