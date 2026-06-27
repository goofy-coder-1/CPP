#include <iostream>
#include <string>
using namespace std;

class lab
{
public:
 string name;
 int age;
 int roll_no;
};

int main() {
    lab student1, student2, student3;

    student1.name = "Subham";
    student1.age = 20;
    student1.roll_no = 25;

    student2.name = "hello";
    student2.age = 10;
    student2.roll_no = 255;

    student3.name = "srs";
    student3.age = 50;
    student3.roll_no = 45;

    cout << student1.name << "\t" << student1.age << "\t"  << student1.roll_no << endl;
    cout << student2.name << "\t"  << student2.age << "\t" << student2.roll_no << endl;
    cout << student3.name << "\t" << student3.age << "\t" << student3.roll_no << endl;

    return 0;
}

