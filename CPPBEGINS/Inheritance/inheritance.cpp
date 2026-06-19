#include <iostream>
#include <string>
using namespace std;

class MyClass {
    public:
    void myFunction() {
        cout << "Hello what is going on here?";
    }
};

class MyChild: public MyClass {  
};

class MyGrandChild: public MyChild {};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}