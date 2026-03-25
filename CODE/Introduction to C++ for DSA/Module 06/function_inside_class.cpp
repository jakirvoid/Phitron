
#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name,int roll,int math,int english){
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }

    void hello(){
        cout << "Hello from " << name <<endl;
    }

    void total(){
        cout << "Total  marks of " << name <<" "<< math + english << endl;
    }


};

int main(){

    Student sakib("Sakib ahmed",2,100,96);
    sakib.hello();
    sakib.total();
    
    Student rakib("Rakib ahmed",23,92,90);
    rakib.hello();
    rakib.total();
    


    return 0;
}