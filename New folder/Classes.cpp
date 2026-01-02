#include<iostream>
using namespace std;

class Teacher{
public:
int id;
string name;
string qualication;
char grade;

void inputTeacher(Teacher &t){

    cout<<"Enter Teacher ID: ";
    cin>>t.id;
    cout<<"Enter Teacher Name: ";
    cin>>t.name;
    cout<<"Enter Teacher Qualification: ";
    cin>>t.qualication;
    cout<<"Enter Teacher Grade: ";
    cin>>t.grade;
}

void outputTeacher(Teacher &t){

    cout<<"\nTeacher ID: "<<t.id;
    cout<<"\nTeacher Name: "<<t.name;
    cout<<"\nTeacher Qualification: "<<t.qualication;
    cout<<"\nTeacher Grade: "<<t.grade;
};
};
int main(){
    Teacher t1;
    t1.inputTeacher(t1);
    t1.outputTeacher(t1);

    return 0;
}