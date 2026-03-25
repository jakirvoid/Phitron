#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }
              
}; 

int main(){

    Student rahim(22,5,3.8);
    Student kahim(20,5,3.6);

    cout << rahim.cls << "\n" << rahim.gpa << "\n" << rahim.roll <<endl;
    cout << kahim.cls << "\n" << kahim.gpa << "\n" << kahim.roll <<endl;

    return 0;
}