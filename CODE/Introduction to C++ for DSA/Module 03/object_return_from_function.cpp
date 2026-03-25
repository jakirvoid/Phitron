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
Student fun(){
    Student kahim(20,5,3.6);
    return kahim;
}

int main(){

    Student rahim(22,5,3.8);
    
    Student obj = fun();

    cout << obj.cls << "\n" << obj.gpa << "\n" << obj.roll <<endl;

    return 0;
}