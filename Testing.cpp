#include "Complex.h"

void err() {
    std::cout << "Test failed" << std::endl;
    exit(1);
}

void TestPlusCom(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    a += b;
    if (a.real != 2 || a.im != 14) err();
}

void TestPlusPrim(){
    Complex a(5 , 6);
    a += 9;
    if (a.real != 14 || a.im != 6) err();
}

void TestMinusCom(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    a -= b;
    if (a.real != 8 || a.im != -2) err();
}

void TestMinusPrim(){
    Complex a(5 , 6);
    a -= 9;
    if (a.real != -4 || a.im != 6) err();
}

void TestMultCom(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    a *= b;
    if (a.real != -63 || a.im != 22) err();
}

void TestMiltPrim(){
    Complex a(5 , 6);
    a *= 9;
    if (a.real != 45 || a.im != 54) err();
}

void TestDivCom(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    a /= b;
    if (a.real != double(33)/double(73) || a.im != double(-58)/double(73)) err();
}

void TestDivPrim(){
    Complex a(5 , 6);
    a /= 9;
    if (a.real != double(5)/double(9) || a.im != double(6)/double(9)) err();
}

void TestAssign(){
    Complex a(5 , 6);
    Complex c;
    c = a;
    if (c.real != 5 || c.im != 6) err();
}

void TestRavno1(){
    Complex a(5 , 6);
    Complex b(a);
    bool res = (a == b);
    if (res != 1) err();
}

void TestRavno2(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    bool res = (a == b);
    if (res != 0) err();
}

void TestUnoPlus(){
    Complex a(5 , 6);
    if ((a == +a) == 0) err();
}

void TestUnoMinus(){
    Complex a(5 , 6);
    if (((a *= -1)  == -a) == 0) err();
}

void TestMore(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    bool res = (a < b);
    if (res != 1) err();
}

void TestLess(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    bool res = (a > b);
    if (res != 0) err();
}

int main(){
    TestPlusCom();
    TestPlusPrim();
    TestMinusCom();
    TestMinusPrim();
    TestMultCom();
    TestMiltPrim();
    TestDivCom();
    TestDivPrim();
    TestAssign();
    TestRavno1();
    TestRavno2();
    TestUnoPlus();
    TestUnoMinus();
    TestMore();
    TestLess();
    std::cout << "Test passed" << std::endl;
}
