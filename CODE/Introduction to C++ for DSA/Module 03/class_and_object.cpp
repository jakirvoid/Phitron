#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    char name[100];
    int roll;
    double gpa;

}; 

int main(){

    Student a,b,c,d;
    a.gpa = 3.8;
    a.roll = 31;
    char tem [100] = "zoro";
    strcpy(a.name,tem);

    cout << a.name << "\n" << a.roll << "\n" << a.gpa << endl;

    cin >> b.name >> b.gpa >> b.roll ; 
    cout << b.name << "\n" << b.roll << "\n" << b.gpa << endl;

    cin.getline(c.name,100);
    cin.ignore();
    cin >> c.gpa >> c.roll;

    cin.getline(d.name,100);
    cin >> d.gpa >> d.roll;

    return 0;
}