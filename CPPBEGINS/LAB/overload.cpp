#include <iostream>
using namespace std;

class Overload {
public:
    float area;

    
    Overload() {
        area = 0;
    }

    
    Overload(int a, int b) {
        area = (float)a * b;
    }

    void disp() {
        cout << "The area is: " << area << endl;
    }
};

int main() {
    
    Overload obj1;
    cout << "Object 1: ";
    obj1.disp();

    
    Overload obj2(5, 10);
    cout << "Object 2: ";
    obj2.disp();

    return 0;
}

