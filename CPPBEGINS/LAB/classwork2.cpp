#include <iostream>
#include <string>
using namespace std;

class Super{
    public: 
    int x = 10;
    virtual void displayValue(){
        cout << "X: " << x << endl;
    }
};

class Sub : public Super{
    public:
      int x = 20;
      void displayValue() override{
        cout << "X: " << x << endl;
      };
};

int main() {
    cout << "Super class reference & Super class object" << endl;
    Super obj1;
    Super& ref1 = obj1;
    cout << "x = " << ref1.x << endl;
    ref1.displayValue();

    cout << "\nSuper class reference & Sub class object" << endl;
    Sub obj2;
    Super& ref2 = obj2;
    cout << "x = " << ref2.x << endl;
    ref2.displayValue();

    cout << "\nSub class reference and Super class object" << endl;
    Super obj3;
    Sub& ref3 = (Sub&) obj3;    // type casting reference (for demonstration only)
    cout << "x = " << ref3.x << endl;
    ref3.displayValue();

    return 0;
}