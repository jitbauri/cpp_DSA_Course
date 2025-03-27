#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    int salary;
    string subject;
};
class student{
    public:
    int rollno;
    float cgpa;
};
class TA :public teacher,public student{
    public:
    string name;
};
int main(){
    TA ta1;
    ta1.name="jit";
    ta1.subject="c++";
    ta1.cgpa=8.5;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;

}
