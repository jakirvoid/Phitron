#include<iostream>
using namespace std;

int main(){

    int day;
    cin>> day;
    
    switch (day)
    {
    case 1:
        cout<< "saturday\n";
        break;
    
    case 2:
        cout<< "sunday\n";
        break;
    
    case 3:
        cout<< "monday\n";
        break;
    case 4:
        cout<< "tuesday\n";
        break;
    case 5:
        cout<< "wednesday\n";
        break;
    case 6:
        cout<< "thursday\n";
        break;
    case 7:
        cout<< "friday\n";
        break;
    
    default:
        cout<< "Wrong input\n";
        break;
    }

    return 0;
}