#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
 string name;
 string model;
 int horsepower;
};

int main() {
    Car car1, car2, car3;

    car1.name = "Corvette";
    car1.model = "C7";
    car1.horsepower = 25;

    car2.name = "BMW";
    car2.model = "X5";
    car2.horsepower = 255;

    car3.name = "Toyota";
    car3.model = "Supra";
    car3.horsepower = 45;

    cout << car1.name << "\t" << car1.model << "\t"  << car1.horsepower << endl;
    cout << car2.name << "\t"  << car2.model << "\t" << car2.horsepower << endl;
    cout << car3.name << "\t" << car3.model << "\t" << car3.horsepower << endl;


  
    return 0;
}