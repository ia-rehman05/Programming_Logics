#include <iostream>
#include <fstream>
using namespace std;

class Contact {
private:
    string fname, lname, phone, email, city;

public:
    void inputRecord() {
        ofstream file("phone.txt", ios::app);

        cout << "Enter First Name: ";
        cin >> fname;
        cout << "Enter Last Name: ";
        cin >> lname;
        cout << "Enter Phone: ";
        cin >> phone;
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter City: ";
        cin >> city;

        file << fname << " " << lname << " "
             << phone << " " << email << " "
             << city << endl;

        file.close();
        cout << "Record Added Successfully!\n";
    }

    void displayAll() {
        ifstream file("phone.txt");

        cout << "\nAll Records:\n";
        while (file >> fname >> lname >> phone >> email >> city) {
            cout << fname << " " << lname << " "
                 << phone << " " << email << " "
                 << city << endl;
        }

        file.close();
    }

    void searchByFirstName() {
        ifstream file("phone.txt");
        string search;
        bool found = false;

        cout << "Enter First Name to Search: ";
        cin >> search;

        while (file >> fname >> lname >> phone >> email >> city) {
            if (fname == search) {
                cout << fname << " " << phone << " " << city << endl;
                found = true;
            }
        }

        if (!found)
            cout << "Record Not Found!\n";

        file.close();
    }

    void searchByCity() {
        ifstream file("phone.txt");
        string search;
        bool found = false;

        cout << "Enter City to Search: ";
        cin >> search;

        while (file >> fname >> lname >> phone >> email >> city) {
            if (city == search) {
                cout << fname << " " << phone << " " << city << endl;
                found = true;
            }
        }

        if (!found)
            cout << "No Record Found!\n";

        file.close();
    }

    void updateFirstName() {
        ifstream file("phone.txt");
        ofstream temp("temp.txt");

        string oldName, newName;
        cout << "Enter Old First Name: ";
        cin >> oldName;
        cout << "Enter New First Name: ";
        cin >> newName;

        while (file >> fname >> lname >> phone >> email >> city) {
            if (fname == oldName)
                fname = newName;

            temp << fname << " " << lname << " "
                 << phone << " " << email << " "
                 << city << endl;
        }

        file.close();
        temp.close();

        remove("phone.txt");
        rename("temp.txt", "phone.txt");

        cout << "First Name Updated Successfully!\n";
    }

    void updatePhone() {
        ifstream file("phone.txt");
        ofstream temp("temp.txt");

        string search, newPhone;
        cout << "Enter First Name: ";
        cin >> search;
        cout << "Enter New Phone Number: ";
        cin >> newPhone;

        while (file >> fname >> lname >> phone >> email >> city) {
            if (fname == search)
                phone = newPhone;

            temp << fname << " " << lname << " "
                 << phone << " " << email << " "
                 << city << endl;
        }

        file.close();
        temp.close();

        remove("phone.txt");
        rename("temp.txt", "phone.txt");

        cout << "Phone Number Updated Successfully!\n";
    }
};

int main() {
    Contact c;
    int choice;

    do {
        cout << "\n===== Telephone Directory =====\n";
        cout << "1. Input Record\n";
        cout << "2. Display All\n";
        cout << "3. Search by First Name\n";
        cout << "4. Search by City\n";
        cout << "5. Update First Name\n";
        cout << "6. Update Phone Number\n";
        cout << "7. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: c.inputRecord(); break;
            case 2: c.displayAll(); break;
            case 3: c.searchByFirstName(); break;
            case 4: c.searchByCity(); break;
            case 5: c.updateFirstName(); break;
            case 6: c.updatePhone(); break;
            case 7: cout << "Exiting Program...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}
