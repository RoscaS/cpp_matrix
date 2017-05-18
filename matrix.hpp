#pragma once
#include<iostream>

template<typename T> class Matrix
{
public:
    Matrix();
    Matrix(const T, const T);
   ~Matrix();

    Matrix(const Matrix<T>&);
    Matrix& operator = (const Matrix<T>&);

    void operator = (const int); // (fill)
    friend std::ostream& operator<<
        (std::ostream&, const Matrix<T>&);

private:
    T** _tab;
    T     _x;
    T     _y;

    void init();
    void copy(const Matrix<T>&);
    void clean();
};

#include"matrix.tpp"