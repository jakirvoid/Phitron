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
    
    Student* kahim = new Student(10,5,4.34);

    cout << kahim->cls << "\n" << kahim->roll << "\n" << kahim->gpa <<endl;

    return 0;
}