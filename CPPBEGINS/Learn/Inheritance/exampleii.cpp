#include <iostream>
using namespace std;
#include <string>

class Human
{
private:
    string name;
    int age;
public:
   Human(string humanName, int humanAge) {
    name = humanName;

    if (humanAge >= 0) 
    {
      age = humanAge;
    } else
    {
        cout << "Invalid Age";
    }  
   }

    virtual void displayDetails() {
    cout << "I am a parent " << endl;
    cout << "My name is " << name << endl;
    cout << "My age is " << age << endl;
   }
};

class humanChild : public Human {
  private:
    string childName;
    int childAge;
  public:
    humanChild(string humanChildName, int humanChildAge): Human(humanChildName, humanChildAge) {
        childName = humanChildName;

        if (humanChildAge >= 0)
        {
            childAge = humanChildAge;
        } else
        {
            cout << "This is not valid";
        }   
    }
    void displayDetails() override {
        cout << "I am a child" << endl;
        cout << "Name: " << childName << endl;
        cout << "Age: " << childAge << endl;
    }

};

int main() {
    string name;

    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;


    Human myHuman(name, age);
    myHuman.displayDetails();

    humanChild myChild("Goku", 25);
    myChild.displayDetails();
    return 0;
}
