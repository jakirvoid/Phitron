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
    Student* karim = new Student(2,3,3);
    return karim;
}

int main(){

    Student rahim(22,5,3.8);
    
    Student* kahim = fun();
    cout << kahim->cls << "\n" << kahim->roll << "\n" << kahim->gpa <<endl;

    return 0;
}