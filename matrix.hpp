#pragma once
#include<iostream>

template<typename T> class Matrix
{
public:
    Matrix();
    Matrix(const int, const int);
   ~Matrix();

    Matrix(const Matrix<T>&);
    Matrix& operator = (const Matrix<T>&);

    void operator = (const T); // (fill)

    void display();

    // friend std::ostream& operator<<(std::ostream&, const Matrix<T>&);
private:
    T** _tab;
    int   _x;
    int   _y;
    void init();
    void copy(const Matrix<T>&);
    void clean();
};

template<typename T>
Matrix<T>::~Matrix()
{
    clean();
}

#include"matrix.tpp"