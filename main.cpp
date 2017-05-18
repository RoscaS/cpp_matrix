#include<iostream>
#include"matrix.hpp"
using namespace std;

int main()
 {
    Matrix<int> m;
    m = 5;
    // cout << m << "\n";
    m.display();
    Matrix<int> m2;
    m2 = 2;
    // cout << m2 << "\n";
    m2.display();
    m2 = m;
    // cout << m2 << "\n";
    m2.display();
    m = 9;
    Matrix<int> m3{m};
    // cout << m3 << "\n";
    m3.display();
    Matrix<int> m4{9,5};
    m4 = 6;
    // cout << m4 << "\n";
    m4.display();
    return 0;
}