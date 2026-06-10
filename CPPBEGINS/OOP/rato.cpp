#include <iostream>

class rato
{
public:
    int myNm;
    bool isBoy;
};

int main() {
    rato myObj;

    myObj.myNm = 15;
    myObj.isBoy = true;

    std::cout << myObj.myNm << '\n';
    std::cout << myObj.isBoy <<'\n';

}