#include "Complex.h"

int main(){
    Complex a(5 , 6);
    Complex b(-3, 8);
    double prim = 9;
    
    cout << "Testing constructor with parameters: " ;
    if (b.real == -3 && b.im == 8) cout << "passed" << endl;
    else cout << "failed" << endl;
    

    Complex c(a);
    cout << "Testing copy constructor: " ;
    if (c.real == 5 && c.im == 6) cout << "passed" << endl;
    else cout << "failed" << endl;


    Complex d;
    cout << "Testing common constructor: " ;
    if (d.real == 0 && d.im == 0) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    cout << "Testing complex summation: " ;
    c += b;
    if (c.real == 2 && c.im == 14) cout << "passed" << endl;
    else cout << "failed" << endl;


    c = a;
    cout << "Testing primitive summation: " ;
    c += prim;
    if (c.real == 14 && c.im == 6) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    c = a;
    cout << "Testing complex subtraction: " ;
    c -= b;
    if (c.real == 8 && c.im == -2) cout << "passed" << endl;
    else cout << "failed" << endl;


    c = a;
    cout << "Testing primitive summation: " ;
    c -= prim;
    if (c.real == -4 && c.im == 6) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    c = a;
    cout << "Testing complex multiplication: " ;
    c *= b;
    if (c.real == -63 && c.im == 22) cout << "passed" << endl;
    else cout << "failed" << endl;
    
    
    c = a;
    cout << "Testing primitive multiplication: " ;
    c *= prim;
    if (c.real == 45 && c.im == 54) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    c = a;
    cout << "Testing complex division: " ;
    c /= b;
    if (c.real == double(33)/double(73) && c.im == double(-58)/double(73)) cout << "passed" << endl;
    else cout << "failed" << endl;
    
    
    c = a;
    cout << "Testing primitive division: " ;
    c /= prim;
    if (c.real == double(5)/double(9) && c.im == double(6)/double(9)) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    c = b; 
    cout << "Testing assignment: " ;
    if (c.real == -3 && c.im == 8) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    c = a;
    -c;
    cout << "Testing unary -: " ;
    if (c.real == -5 && c.im == -6) cout << "passed" << endl;
    else cout << "failed" << endl;


    c = a;
    +c;
    cout << "Testing unary +: " ;
    if (c.real == 5 && c.im == 6) cout << "passed" << endl;
    else cout << "failed" << endl;
    cout << endl;


    bool res = (c == b);
    cout << "Testing == operation #1: " ;
    if (res == 0) cout << "passed" << endl;
    else cout << "failed" << endl;


    res = (c==a);
    cout << "Testing == operation #2: " ;
    if (res == 1) cout << "passed" << endl;
    else cout << "failed" << endl;


    res = (c < b);
    cout << "Testing < operation: " ;
    if (res == 1) cout << "passed" << endl;
    else cout << "failed" << endl;


    res = (c > b);
    cout << "Testing > operation: " ;
    if (res == 0) cout << "passed" << endl;
    else cout << "failed" << endl;

    return 0;
}
