#include <iostream>
#include <string>
using namespace std;

class NEB {
protected: 
    string name;
    int number;

public:
    
    NEB(string collegeName, int studentNumber) : name(collegeName), number(max(0, studentNumber)) {
        if (studentNumber < 0) {
            cout << "Invalid Number" << endl;
        }
    }

    virtual void displayDetails() {
        cout << "\n--- BOARD ---" << endl;
        cout << "College Name    : " << name << endl;
        cout << "Student Present : " << number << endl;
    }
};

class Reliance : public NEB {
public:
    
    Reliance(string collegeName, int studentNumber) : NEB(collegeName, studentNumber) {}

    void displayDetails() override {
        cout << "\n--- NEB Branch ---" << endl;
        cout << "Name            : " << name << endl;
        cout << "Student Present : " << number << endl;
    }
};

int main() {
    string name;
    int number;

    cout << "Enter name: ";
    getline(cin, name); 

    cout << "Enter Number: ";
    cin >> number;

    NEB myHuman(name, number);
    myHuman.displayDetails();

    Reliance myChild("Eager Bridge", 25);
    myChild.displayDetails();

    return 0;
}