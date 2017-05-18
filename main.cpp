#include<iostream>
#include"matrix.hpp"
using namespace std;

int main()
 {
    Matrix m;
    m = 5;
    cout << m << "\n";
    Matrix m2;
    m2 = 2;
    cout << m2 << "\n";
    m2 = m;
    cout << m2 << "\n";
    m = 9;
    Matrix m3{m};
    cout << m3 << "\n";
    Matrix m4{9,5};
    m4 = 6;
    cout << m4 << "\n";
    return 0;
}
