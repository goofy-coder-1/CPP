#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    {
        int x;
        x = 50;
        y = 10;
        cout << "Inner Block" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    cout << "Outer Block" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0; // scope
}