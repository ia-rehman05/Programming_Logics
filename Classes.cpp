#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;    
int displayFloatArray() {
    float arr[5] = {1.1,2.2,3.3,4.4,5.5};
    for(int i=0;i<5;i++)
        cout << arr[i] << "\t";
    return 0;

}
};
int main(){
    Student s1; 
    Student s2;     
    Student s3;                        // Create an object of Student class then we can access class variable and method
s1.name="Abdur Rehman";
s1.age = 20;
cout << "Student 1 Name: " << s1.name << endl;
cout << "Student 1 Age: " << s1.age << endl;

s1.displayFloatArray();
cout<< endl;
cout<< endl;
cout<< endl;

s2.name="John Doe";
s2.age = 22;
cout << "Student 2 Name: " << s2.name << endl;
cout << "Student 2 Age: " << s2.age << endl;

s2.displayFloatArray();


//    s1.name="Abdur Rehman";
//    s1.age = 20;
// //    s1.salary = 50000;
//     s1.displayInfo();
//     // s1.displaySalary();               // Error: 'salary' is a private member of 'Student'
//     // s1.salary = 60000;               // Error: 'salary' is a private member of 'Student'
}