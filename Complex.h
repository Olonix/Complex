#pragma once

struct Complex {
    double real;
    double im;

    Complex(); 
    Complex(double x, double y); 
    Complex(const Complex& another);

    Complex operator + (const Complex& another) const;
    Complex operator + (double z) const;

    Complex operator - (const Complex& another) const;
    Complex operator - (double z) const;

    Complex operator * (const Complex& another) const;
    Complex operator * (double z) const;

    Complex operator / (const Complex& another) const;
    Complex operator / (double z) const;

    Complex& operator += (const Complex& another); 
    Complex& operator += (double z);

    Complex& operator -= (const Complex& another); 
    Complex& operator -= (double z);

    Complex& operator *= (const Complex& another); 
    Complex& operator *= (double z);

    Complex& operator /= (const Complex& another); 
    Complex& operator /= (double z);

    Complex& operator = (const Complex& another); 

    Complex operator + () const; 
    Complex operator - () const;

    bool operator == (const Complex& another) const; 
    bool operator < (const Complex& another) const;
    bool operator > (const Complex& another) const;
};

Complex operator + (double z, const Complex& another);
Complex operator - (double z, const Complex& another);
Complex operator * (double z, const Complex& another);
Complex operator / (double z, const Complex& another);
