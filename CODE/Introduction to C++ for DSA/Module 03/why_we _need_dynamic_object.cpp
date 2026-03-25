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
Student* fun(){
    Student kahim(20,5,3.6);
    Student* p = &kahim;
    return p;
}

int main(){

    Student rahim(22,5,3.8);
    
    Student* p = fun();

    cout << p->cls << "\n" << p->roll << "\n" << p->gpa <<endl;

    return 0;
}