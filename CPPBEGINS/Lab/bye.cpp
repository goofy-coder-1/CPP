#include <iostream>
using namespace std;

class bye
{
public:
  void myMethod() {
    cout << "Bye Bye Ronaldo";
  }
};

int main() {
    bye myObj;
    bye;
    myObj.myMethod();
    return 0;
}
