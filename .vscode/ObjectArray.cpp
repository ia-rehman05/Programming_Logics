#include<iostream>
using namespace std;

class Teacher {
public:
    int id;
    string name;
    string qualification;
    char grade;

    void inputTeacher(Teacher t[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Enter details for Teacher " << i + 1 << ":\n";
            cout << "ID: ";
            cin >> t[i].id;
            cout << "Name: ";
            cin >> t[i].name;  
            cout << "Qualification: ";
            cin >> t[i].qualification;
            cout << "Grade: ";
            cin >> t[i].grade;
        }
    }

    void DisplayTeacher(Teacher t[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "\nTeacher " << i + 1 << ":\n";
            cout << "ID: " << t[i].id << endl;
            cout << "Name: " << t[i].name << endl;
            cout << "Qualification: " << t[i].qualification << endl;
            cout << "Grade: " << t[i].grade << endl;
        }
    }

    void searchTeacher(Teacher t[], int size, int searchId) {
        for (int i = 0; i < size; i++) {
            if (t[i].id == searchId) {
                cout << "\nTeacher Found:\n";
                cout << "ID: " << t[i].id << endl;
                cout << "Name: " << t[i].name << endl;
                cout << "Qualification: " << t[i].qualification << endl;
                cout << "Grade: " << t[i].grade << endl;
                return;  
            }
        }
        cout << "\nTeacher with ID " << searchId << " not found.\n";
    }
};  
int main(){
    int size;
    cout<<"Enter number of teachers: ";
    cin>>size;

    Teacher t[5];

    Teacher t1;
    t1.inputTeacher(t, size);
    t1.DisplayTeacher(t, size);
    int searchId;
}
    
