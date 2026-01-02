#include<iostream>
using namespace std;

class Teacher{
public:
    int id;
    string name;
    string qualification;
    char grade;
};


int main (){
    Teacher t1;
    Teacher *ptr = &t1;

    cout << "Enter Teacher ID: ";
    cin >> ptr->id;
    cout << "Enter Teacher Name: ";
    cin >> ptr->name;
    cout << "Enter Teacher Qualification: ";
    cin >> ptr->qualification;
    cout << "Enter Teacher Grade: ";
    cin >> ptr->grade;

    cout << "\nTeacher ID: " << ptr->id;
    cout << "\nTeacher Name: " << ptr->name;
    cout << "\nTeacher Qualification: " << ptr->qualification;
    cout << "\nTeacher Grade: " << ptr->grade;

    return 0;
}
