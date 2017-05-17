#pragma once
#include<iostream>

class Matrix
{
private:
    int** _tab;
    int     _x;
    int     _y;

    void init();
    void copy(const Matrix&);
    void clean();
public:
    Matrix();
    Matrix(const int, const int);
   ~Matrix();

    Matrix(const Matrix&);
    Matrix& operator = (const Matrix&);

    void operator = (const int); // (fill)
    friend std::ostream& operator<<
        (std::ostream&, const Matrix&);
};
