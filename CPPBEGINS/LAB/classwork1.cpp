#include <iostream>
#include <string>
using namespace std;

class Shape
{
  public:
    virtual void displayMessage(){
        cout << "This is a shape" << endl;
    }
};

class Rectangle : public Shape {
    public:
       void displayMessage() override {
           cout << "This is a rectanglular shape"<< endl;
       }
};

class Circle : public Shape {
    public:
       void displayMessage() override {
           cout << "This is a circlular shape"<< endl;
       }
};

class Square : public Rectangle {
    public:
      void displayMessage() override{
        cout << "square is a rectangle"<< endl;
      }
};

int main(){
    Shape myShape;
    myShape.displayMessage();

    Rectangle myRectangle;
    myRectangle.displayMessage();

    Circle myCircle;
    myCircle.displayMessage();

    Square mySquare;
    mySquare.displayMessage();

    return 0;
}