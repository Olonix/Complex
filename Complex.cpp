#include "Complex.h"
#include <cmath>

Complex::Complex(): real(0), im(0) {}

Complex::Complex(double x, double y) {
    real = x;
    im = y;
}

Complex::Complex(const Complex& another): real(another.real), im(another.im) {}

Complex Complex::operator + (const Complex& another) const{
    Complex c;
    c.real = real + another.real;
    c.im = im + another.im;
    return c;
}

Complex Complex::operator + (double z) const{
    Complex c;
    c.real = real + z;
    c.im = im;
    return c;
}

Complex operator + (double z, const Complex& another) {
    Complex c;
    c.real = z + another.real;
    c.im = another.im;
    return c;
}

Complex Complex::operator - (const Complex& another) const{
    Complex c;
    c.real = real - another.real;
    c.im = im - another.im;
    return c;
}

Complex Complex::operator - (double z) const{
    Complex c;
    c.real = real - z;
    c.im = im;
    return c;
}

Complex operator - (double z, const Complex& another) {
    Complex c;
    c.real = z - another.real;
    c.im = another.im;
    return c;
}

Complex Complex::operator * (const Complex& another) const{
    Complex c;
    c.real = real*another.real - im*another.im;
    c.im = real*another.im + im*another.real;
    return c;
}

Complex Complex::operator * (double z) const{
    Complex c;
    c.real = real * z;
    c.im = im * z;
    return c;
}

Complex operator * (double z, const Complex& another) {
    Complex c;
    c.real = z * another.real;
    c.im = z * another.im;
    return c;
}

Complex Complex::operator / (const Complex& another) const{
    if (std::abs(another.real*another.real + another.im*another.im) < 1e-9) {
        return *this;
    } 
    Complex c;
    c.real = (real*another.real + im*another.im)/(another.real*another.real + another.im*another.im);
    c.im = (im*another.real - real*another.im)/(another.real*another.real + another.im*another.im);
    return c;    
}

Complex Complex::operator / (double z) const{
    if (std::abs(z) < 1e-9) {
        return *this;   
        }
    Complex c;
    c.real = real / z;
    c.im = im / z;
    return c;     
}

Complex operator / (double z, const Complex& another) {
    Complex c;
    if (std::abs(another.real*another.real + another.im*another.im) < 1e-9) {
        c.real = z;
        return c;
    }
    c.real = z*another.real/(another.real*another.real + another.im*another.im);
    c.im = -z*another.im/(another.real*another.real + another.im*another.im);
    return c;    
}

Complex& Complex::operator += (const Complex& another) {
    real += another.real;
    im += another.im;
    return *this;
}

Complex& Complex::operator += (double z) {
    real += z;
    return *this;
}

Complex& Complex::operator -= (const Complex& another) {
    real -= another.real;
    im -= another.im;
    return *this;
}

Complex& Complex::operator -= (double z) {
    real -= z;
    return *this;
}

Complex& Complex::operator *= (const Complex& another) {
    double realol = real;
    real = real*another.real - im*another.im;
    im = realol*another.im + im*another.real;
    return *this;
}

Complex& Complex::operator *= (double z) {
    real *= z;
    im *= z;
    return *this;
}

Complex& Complex::operator /= (const Complex& another) {
    if (std::abs(another.real*another.real + another.im*another.im) < 1e-9) {
        return *this;
    } 
    double realol = real;
    real = (real*another.real + im*another.im)/(another.real*another.real + another.im*another.im);
    im = (im*another.real - realol*another.im)/(another.real*another.real + another.im*another.im);
    return *this;    
}

Complex& Complex::operator /= (double z) {
    if (std::abs(z) < 1e-9) {
        return *this;   
        }
    im /= z;
    real /= z;
    return *this;     
}

Complex& Complex::operator = (const Complex& another) {
    real = another.real;
    im = another.im;
    return *this;
}

Complex Complex::operator + () const{
    return *this;
}

Complex Complex::operator - () const{
    Complex minus(-real, -im);
    return minus;
}

double absolute(const Complex& num){
    return (num.real*num.real + num.im*num.im);
}

bool Complex::operator == (const Complex& another) const{
    return (real==another.real && im==another.im);
}

bool Complex::operator < (const Complex& another) const{
    return (absolute(*this) < absolute(another));
}

bool Complex::operator > (const Complex& another) const{
    return (absolute(*this) > absolute(another));
}
