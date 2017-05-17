#pragma once

// template<typename T>
class Matrix
{
protected:
    int** _tab;
    int     _x;
    int     _y;
    void init();
public:
    Matrix();
    Matrix(int, int);
    Matrix(const Matrix&);
   ~Matrix();

   void show();
   Matrix& operator = (const Matrix&);
   Matrix& operator = (int&);
};

// #include "matrix.tpp"