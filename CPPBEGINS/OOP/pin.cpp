#include <iostream>
using namespace std;

class Pin {
private:
    int pin; 
    
public:
    int account;
    int age;

   
    void setPin(int p) { // random
        pin = p;
    }

   
    int getPin() {
        return pin; // random second
    }
};

int main() {
    Pin firstguy;
    
    
    firstguy.setPin(1234); 
    
    firstguy.account = 321456;
    firstguy.age = 20;
    
    cout << "Pin is: " << firstguy.getPin() << endl;
    cout << "Age is: " << firstguy.age << endl;
    
    return 0;
}