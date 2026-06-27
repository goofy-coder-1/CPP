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

   void humanDetail() {
    cout << "Human name is " << name << endl;
    cout << "Human age is " << age << endl;
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
}
