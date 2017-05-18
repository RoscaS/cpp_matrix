#include<iostream>
#include"matrix.hpp"
#include"str.hpp"
using namespace std;

int main()
 {
    cout << "INT:\n";
    // INT:
    Matrix<int> m;
    m = 5;
    // cout << m << "\n";
    m.display(); cout << "\n";
    Matrix<int> m2;
    m2 = 2;
    // cout << m2 << "\n";
    m2.display(); cout << "\n";
    m2 = m;
    // cout << m2 << "\n";
    m2.display(); cout << "\n";
    m = 9;
    Matrix<int> m3{m};
    // cout << m3 << "\n";
    m3.display(); cout << "\n";
    Matrix<int> m4{9,5};
    m4 = 6;
    // cout << m4 << "\n";
    m4.display(); cout << "\n";

    // CHARS:
    cout << "\n\nCHARS:\n";
    Matrix<char> m5;
    m5 = 'c';
    // cout << m5 << "\n";
    m5.display(); cout << "\n";
    Matrix<char> m6;
    m6 = 'd';
    // cout << m2 << "\n";
    m6.display(); cout << "\n";
    m6 = m5;
    // cout << m2 << "\n";
    m6.display(); cout << "\n";
    m5 = 'e';
    Matrix<char> m7{m5};
    // cout << m3 << "\n";
    m7.display(); cout << "\n";
    Matrix<char> m8{9,5};
    m8 = 'f';
    // cout << m4 << "\n";
    m8.display(); cout << "\n";


    // DOUBLE:
    cout << "\n\nDOUBLE:\n";
    Matrix<double> m9;
    m9 = 10.3;
    // cout << m9 << "\n";
    m9.display(); cout << "\n";
    Matrix<double> m10;
    m10 = 6.7;
    // cout << m2 << "\n";
    m10.display(); cout << "\n";
    m10 = m9;
    // cout << m2 << "\n";
    m10.display(); cout << "\n";
    m9 = 841.3736;
    Matrix<double> m11{m9};
    // cout << m3 << "\n";
    m11.display(); cout << "\n";
    Matrix<double> m12{9,5};
    m12 = 12.3333;
    // cout << m4 << "\n";
    m12.display(); cout << "\n";

    // STRING:
    cout << "\n\nCustom type STR:\n";
    Matrix<Str> m13;
    m13 = "test";
    // cout << m13 << "\n";
    m13.display(); cout << "\n";
    Matrix<Str> m14;
    m14 = "poule";
    // cout << m2 << "\n";
    m14.display(); cout << "\n";
    m14 = m13;
    // cout << m2 << "\n";
    m14.display(); cout << "\n";
    m13 = "cochon";
    Matrix<Str> m14{m13};
    // cout << m3 << "\n";
    m14.display(); cout << "\n";
    Matrix<Str> m15{9,5};
    m15 = "boule";
    // cout << m4 << "\n";
    m15.display(); cout << "\n";


    return 0;
}