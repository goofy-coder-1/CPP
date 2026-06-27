#include <iostream>
using namespace std;

class complex {
    double re, im; // representation: two doubles
public:
    // Constructors
    complex(double r, double i) : re{r}, im{i} {} // construct complex from two scalars
    complex(double r) : re{r}, im{0} {}           // construct complex from one scalar
    complex() : re{0}, im{0} {}                   // default complex: {0,0}

    // Getters and Setters
    double real() const { return re; }
    void real(double d) { re = d; }
    double imag() const { return im; }
    void imag(double d) { im = d; }

    // Compound Assignment Operators (In-class definitions)
    complex& operator+=(complex z) { 
        re += z.re; 
        im += z.im; 
        return *this; 
    }
    
    complex& operator-=(complex z) { 
        re -= z.re; 
        im -= z.im; 
        return *this; 
    }
    
    // Declared in-class, defined out-of-class below
    complex& operator*=(complex z);
    complex& operator/=(complex z);
};

// --- Out-of-Class Definitions ---

// Complex Multiplication: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
complex& complex::operator*=(complex z) {
    double old_re = re; // Store old real value before it gets overwritten
    re = (old_re * z.re) - (im * z.im);
    im = (old_re * z.im) + (im * z.re);
    return *this;
}

// Complex Division: Multiply top and bottom by the complex conjugate
complex& complex::operator/=(complex z) {
    double denom = (z.re * z.re) + (z.im * z.im);
    
    // Note: In real-world applications, you'd check for denom == 0 here.
    double old_re = re;
    re = ((old_re * z.re) + (im * z.im)) / denom;
    im = ((im * z.re) - (old_re * z.im)) / denom;
    return *this;
}

// --- Main Function to test the OOP Implementation ---
int main() {
    // Creating complex objects using constructors
    complex c1(4.0, 3.0); // 4 + 3i
    complex c2(2.0, -1.0); // 2 - 1i

    cout << "Initial c1: " << c1.real() << " + " << c1.imag() << "i" << endl;
    cout << "Initial c2: " << c2.real() << " + " << c2.imag() << "i" << endl;
    cout << "---------------------------------------" << endl;

    // Testing +=
    c1 += c2;
    cout << "After c1 += c2 -> c1 = " << c1.real() << " + " << c1.imag() << "i" << endl;

    // Testing -=
    c1 -= c2;
    cout << "After c1 -= c2 -> c1 = " << c1.real() << " + " << c1.imag() << "i" << endl;

    // Testing *=
    c1 *= c2;
    cout << "After c1 *= c2 -> c1 = " << c1.real() << " + " << c1.imag() << "i" << endl;

    // Testing /=
    c1 /= c2;
    cout << "After c1 /= c2 -> c1 = " << c1.real() << " + " << c1.imag() << "i" << endl;

    return 0;
}