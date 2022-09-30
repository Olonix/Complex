#include "Complex.h"
#include <iostream>

void Test_Bin_Plus_Com(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    if ((a + b).real != 2 || (a + b).im != 14) {
        std::cout << "'+ complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Plus_Prim(int *f){
    Complex a(5, 6);
    if ((a + 9).real != 14 || (a + 9).im != 6) {
        std::cout << "'+ primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Prim_Plus_Com(int *f){
    Complex a(5, 6);
    if ((9 + a).real != 14 || (9 + a).im != 6) {
        std::cout << "'primitive + complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Minus_Com(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    if ((a - b).real != 8 || (a - b).im != -2) {
        std::cout << "'- complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Minus_Prim(int *f){
    Complex a(5, 6);
    if ((a - 9).real != -4 || (a - 9).im != 6) {
        std::cout << "'- primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Prim_Minus_Com(int *f){
    Complex a(5, 6);
    if ((9 - a).real != 4 || (9 - a).im != 6) {
        std::cout << "'primitive - complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Mult_Com(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    if ((a * b).real != -63 || (a * b).im != 22) {
        std::cout << "'* complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Mult_Prim(int *f){
    Complex a(5, 6);
    if ((a * 9).real != 45 || (a * 9).im != 54) {
        std::cout << "'* primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Prim_Mult_Com(int *f){
    Complex a(5, 6);
    if ((9 * a).real != 45 || (9 * a).im != 54) {
        std::cout << "'primitive * complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Div_Com_1(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    if ((a / b).real != double(33)/double(73) || (a / b).im != double(-58)/double(73)) {
        std::cout << "'/ complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Div_Prim_1(int *f){
    Complex a(5, 6);
    if ((a / 9).real != double(5)/double(9) || (a / 9).im != double(6)/double(9)) {
        std::cout << "'/ primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Div_Com_2(int *f){
    Complex a(5, 6);
    Complex b;
    if ((a / b).real != 5 || (a / b).im != 6) {
        std::cout << "'/ complex(0, 0)' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Bin_Div_Prim_2(int *f){
    Complex a(5, 6);
    if ((a / 0).real != 5 || (a / 0).im != 6) {
        std::cout << "'/ 0' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Prim_Div_Com_1(int *f){
    Complex a(5, 6);
    if ((9 / a).real != double(45)/double(61) || (9 / a).im != double(-54)/double(61)) {
        std::cout << "'primitive / complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Prim_Div_Com_2(int *f){
    Complex a;
    if ((9 / a).real != 9 || (9 / a).im != 0) {
        std::cout << "'primitive / complex(0,0)' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Plus_Com(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    a += b;
    if (a.real != 2 || a.im != 14) {
        std::cout << "'+= complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Plus_Prim(int *f){
    Complex a(5, 6);
    a += 9;
    if (a.real != 14 || a.im != 6) {
        std::cout << "'+= primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Minus_Com(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    a -= b;
    if (a.real != 8 || a.im != -2) {
        std::cout << "'-= complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Minus_Prim(int *f){
    Complex a(5, 6);
    a -= 9;
    if (a.real != -4 || a.im != 6) {
        std::cout << "'-= primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Mult_Com(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    a *= b;
    if (a.real != -63 || a.im != 22) {
        std::cout << "'*= complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Milt_Prim(int *f){
    Complex a(5, 6);
    a *= 9;
    if (a.real != 45 || a.im != 54) {
        std::cout << "'*= primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Div_Com_1(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    a /= b;
    if (a.real != double(33)/double(73) || a.im != double(-58)/double(73)) {
        std::cout << "'/= complex' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Div_Prim_1(int *f){
    Complex a(5, 6);
    a /= 9;
    if (a.real != double(5)/double(9) || a.im != double(6)/double(9)) {
        std::cout << "'/= primitive' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Div_Com_2(int *f){
    Complex a(5, 6);
    Complex b;
    a /= b;
    if (a.real != 5 || a.im != 6) {
        std::cout << "'/= complex(0, 0)' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Div_Prim_2(int *f){
    Complex a(5, 6);
    a /= 0;
    if (a.real != 5 || a.im != 6) {
        std::cout << "'/= 0' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Assign(int *f){
    Complex a(5, 6);
    Complex c;
    c = a;
    if (c.real != 5 || c.im != 6) {
        std::cout << "'=' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Abs(int *f){
    Complex a(5, 6);
    if (std::abs(a.absolute() - double(61)) >= 1e-9) {
        std::cout << "'absolute' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Ravno_1(int *f){
    Complex a(5, 6);
    Complex b(a);
    bool res = (a == b);
    if (res != 1) { 
        std::cout << "'==' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Ravno_2(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    bool res = (a == b);
    if (res != 0) {
        std::cout << "'==' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Uno_Plus(int *f){
    Complex a(5, 6);
    if ((+a).real != 5 || (+a).im != 6) {
        std::cout << "'unary +' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Uno_Minus(int *f){
    Complex a(5, 6);
    if ((-a).real != -5 || (-a).im != -6) {
        std::cout << "'unary -' test failed" << std::endl;
        *f = 1;
    }
}

void Test_More(int  *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    bool res = (a < b);
    if (res != 1) {
        std::cout << "'<' test failed" << std::endl;
        *f = 1;
    }
}

void Test_Less(int *f){
    Complex a(5, 6);
    Complex b(-3, 8);
    bool res = (a > b);
    if (res != 0) {
        std::cout << "'>' test failed" << std::endl;
        *f = 1;
    }
}

int main(){
    int flag = 0;
    Test_Bin_Plus_Com(&flag);
    Test_Bin_Plus_Prim(&flag);
    Test_Prim_Plus_Com(&flag);

    Test_Bin_Minus_Com(&flag);
    Test_Bin_Minus_Prim(&flag);
    Test_Prim_Minus_Com(&flag);

    Test_Bin_Mult_Com(&flag);
    Test_Bin_Mult_Prim(&flag);
    Test_Prim_Mult_Com(&flag);

    Test_Bin_Div_Com_1(&flag);
    Test_Bin_Div_Prim_1(&flag);
    Test_Bin_Div_Com_2(&flag);
    Test_Bin_Div_Prim_2(&flag);
    Test_Prim_Div_Com_1(&flag);
    Test_Prim_Div_Com_2(&flag);

    Test_Plus_Com(&flag);
    Test_Plus_Prim(&flag);

    Test_Minus_Com(&flag);
    Test_Minus_Prim(&flag);

    Test_Mult_Com(&flag);
    Test_Milt_Prim(&flag);

    Test_Div_Com_1(&flag);
    Test_Div_Prim_1(&flag);
    Test_Div_Com_2(&flag);
    Test_Div_Prim_2(&flag);

    Test_Assign(&flag);

    Test_Uno_Plus(&flag);
    Test_Uno_Minus(&flag);

    Test_Ravno_1(&flag);
    Test_Ravno_2(&flag);
    Test_More(&flag);
    Test_Less(&flag);

    Test_Abs(&flag);
    if (flag == 0) {
        std::cout << "Test passed" << std::endl;
        return 0;
    }
    return -1;
}
