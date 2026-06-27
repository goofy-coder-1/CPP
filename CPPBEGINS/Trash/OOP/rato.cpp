#include <iostream>
#include<string>


class rato
{
public:
    int myNm;
    std::string brand;
};

int main() {
    rato myObj;

    myObj.myNm = 15;
    myObj.brand = "true";

    std::cout << myObj.myNm << '\n';
    std::cout << myObj.brand <<'\n';

}