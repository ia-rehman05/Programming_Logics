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

#include<iostream>
using namespace std;

class Teacher {
public:
    int id;
    string name;
    string qualification;
    char grade;

    // Function to input all teachers
    void inputTeacher(Teacher t[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Enter details for Teacher " << i + 1 << ":\n";
            cout << "ID: ";
            cin >> t[i].id;
            cout << "Name: ";
            cin >> t[i].name;  // Note: cin >> reads only one word
            cout << "Qualification: ";
            cin >> t[i].qualification;
            cout << "Grade: ";
            cin >> t[i].grade;
        }
    }

    // Function to display all teachers
    void DisplayTeacher(Teacher t[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "\nTeacher " << i + 1 << ":\n";
            cout << "ID: " << t[i].id << endl;
            cout << "Name: " << t[i].name << endl;
            cout << "Qualification: " << t[i].qualification << endl;
            cout << "Grade: " << t[i].grade << endl;
        }
    }

    // Function to search a teacher by ID
    void searchTeacher(Teacher t[], int size, int searchId) {
        for (int i = 0; i < size; i++) {
            if (t[i].id == searchId) {
                cout << "\nTeacher Found:\n";
                cout << "ID: " << t[i].id << endl;
                cout << "Name: " << t[i].name << endl;
                cout << "Qualification: " << t[i].qualification << endl;
                cout << "Grade: " << t[i].grade << endl;
                return;  // Exit function after finding
            }
        }
        cout << "\nTeacher with ID " << searchId << " not found.\n";
    }
};  // Class ends here
int main(){
    int size;
    cout<<"Enter number of teachers: ";
    cin>>size;

    Teacher t[5];

    Teacher t1;
    t1.inputTeacher(t, size);
    t1.DisplayTeacher(t, size);
    int searchId;
    cout << "\nEnter Teacher ID to search: ";
    cin >> searchId;
    t1.searchTeacher(t, size, searchId);
   
}
    
