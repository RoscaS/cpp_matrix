#pragma once

template<typename T>
class Matrix
{
protected:
    T** _tab;
    int _len;
    void init();
public:
    Matrix();
    Matrix(T);
    Matrix(const Matrix&);
   ~Matrix();

   void show();
   Matrix& operator = (const Matrix&);
   Matrix& operator = (T&);
};



#include "matrix.tpp"