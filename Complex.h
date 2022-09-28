#include <iostream>
#include <cmath>

struct Complex {
    double real;
    double im;

    Complex (); 
    Complex(double x, double y); 
    Complex(const Complex& another); 
    ~Complex(); 

    Complex & operator += (const Complex& another); 
    Complex & operator += (double z);

    Complex & operator -= (const Complex& another); 
    Complex & operator -= (double z);

    Complex & operator *= (const Complex& another); 
    Complex & operator *= (double z);

    Complex & operator /= (const Complex & another); 
    Complex & operator /= (double z);

    Complex & operator = (const Complex& another); 

    Complex operator + () const; 
    Complex operator - () const;

    bool operator == (const Complex & another) const; 
    bool operator < (const Complex & another) const;
    bool operator > (const Complex & another) const;
};

Complex::Complex():
    real(0), im(0) {}

Complex::Complex(double x, double y) {
    real = x;
    im = y;
}

Complex::Complex(const Complex& another):
    real(another.real), im(another.im) {}
   
Complex::~Complex(){}

Complex & Complex::operator += (const Complex& another) {
    real += another.real;
    im += another.im;
    return(*this);
}

Complex & Complex::operator += (double z) {
    real += z;
    return(*this);
}

Complex & Complex::operator -= (const Complex& another) {
    real -= another.real;
    im -= another.im;
    return(*this);
}

Complex & Complex::operator -= (double z) {
    real -= z;
    return(*this);
}

Complex & Complex::operator *= (const Complex& another) {
    double realol = real;
    real = real*another.real - im*another.im;
    im = realol*another.im + im*another.real;
    return(*this);
}

Complex & Complex::operator *= (double z) {
    real *= z;
    im *= z;
    return(*this);
}

Complex & Complex::operator /= (const Complex& another) {
    if ((pow(another.real,2) + pow(another.im,2)) == 0) {
        std::cout << "bruh moment. im gonna return the previous value" << std::endl;
        return(*this);
    } 
    double realol = real;
    real = (real*another.real + im*another.im)/(pow(another.real,2) + pow(another.im,2));
    im = (im*another.real - realol*another.im)/(pow(another.real,2) + pow(another.im,2));
    return(*this);    
}

Complex & Complex::operator /= (double z) {
    if (z == 0) {
        std::cout << "bruh moment. im gonna return the previous value" << std::endl;
        return(*this);   
        }
    im /= z;
    real /= z;
    return(*this);     
}

Complex & Complex::operator = (const Complex & another) {
    real = another.real;
    im = another.im;
    return(*this);
}

Complex Complex::operator + () const{
    return(*this);
}

Complex Complex::operator - () const{
    Complex minus(-real, -im);
    return(minus);
}

double absolute(const Complex & num){
    return(sqrt(pow(num.real, 2)+pow(num.im, 2)));
}

bool Complex::operator == (const Complex & another) const{
    return(real==another.real && im==another.im);
}

bool Complex::operator < (const Complex & another) const{
    return(absolute(*this) < absolute(another));
}

bool Complex::operator > (const Complex & another) const{
    return(absolute(*this) > absolute(another));
}
