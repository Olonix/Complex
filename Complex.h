#include <iostream>
#include <cmath>

using namespace std;

struct Complex {
    double real;
    double im;

    Complex (); // common constructor
    Complex(double x, double y); // constuctor with parameters
    Complex(const Complex& another); // copy constructor
    ~Complex(); // destructor

    Complex operator += (const Complex& another); // summation
    Complex operator += (double z);

    Complex operator -= (const Complex& another); // subtraction
    Complex operator -= (double z);

    Complex operator *= (const Complex& another); // multiplication
    Complex operator *= (double z);

    Complex operator /= (const Complex& another); // division
    Complex operator /= (double z);

    Complex operator = (const Complex & another); // assignment

    Complex operator + (); //unary + 
    Complex operator - (); //unary -

    bool operator == (const Complex & another) const; // comparision operations (by absolute values)
    bool operator < (const Complex & another) const;
    bool operator > (const Complex & another) const;

    void getNum(); // print num
};

Complex::Complex():
    real(0), im(0) {}

Complex::Complex(double x, double y) {
    real = x;
    im = y;
}

Complex::Complex(const Complex& another):
    real(another.real), im(another.im) {}

Complex::~Complex(){
    // cout << "destroying number"<< endl;
}

Complex Complex::operator += (const Complex& another) {
    real += another.real;
    im += another.im;
    return(*this);
}

Complex Complex::operator += (double z) {
    real += z;
    return(*this);
}

Complex Complex::operator -= (const Complex& another) {
    real -= another.real;
    im -= another.im;
    return(*this);
}

Complex Complex::operator -= (double z) {
    real -= z;
    return(*this);
}

Complex Complex::operator *= (const Complex& another) {
    double realol = real;
    real = real*another.real - im*another.im;
    im = realol*another.im + im*another.real;
    return(*this);
}

Complex Complex::operator *= (double z) {
    real *= z;
    im *= z;
    return(*this);
}

Complex Complex::operator /= (const Complex& another) {
    if ((pow(another.real,2) + pow(another.im,2)) == 0) {
        cout << "bruh moment. im gonna return the previous value" << endl;
        return(*this);   
        }
    else {
        double realol = real;
        real = (real*another.real + im*another.im)/(pow(another.real,2) + pow(another.im,2));
        im = (im*another.real - realol*another.im)/(pow(another.real,2) + pow(another.im,2));
        return(*this);
        }
}

Complex Complex::operator /= (double z) {
    if (z == 0) {
        cout << "bruh moment. im gonna return the previous value" << endl;
        return(*this);   
        }
    else {
        im /= z;
        real /= z;
        return(*this);
        }
}

Complex Complex::operator = (const Complex & another) {
    real = another.real;
    im = another.im;
    return(*this);
}

Complex Complex::operator + () {
    return(*this);
}

Complex Complex::operator - () {
    im *= -1;
    real *= -1;
    return(*this);
}

double absolute(const Complex & num){ // absolute value of complex number
    return(sqrt(pow(num.real, 2)+pow(num.im, 2)));
}

bool Complex::operator == (const Complex & another) const{
    return(absolute(*this)==absolute(another));
}

bool Complex::operator < (const Complex & another) const{
    return(absolute(*this) < absolute(another));
}

bool Complex::operator > (const Complex & another) const{
    return(absolute(*this) > absolute(another));
}

void Complex::getNum() {
        cout << "The num is: (" << real << "," << im << ")"<< endl;
}
