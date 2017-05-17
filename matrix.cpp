#include<iostream>
#include"matrix.hpp"

void Matrix::fill()
{
    int count = 0;
    for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            _tab[i][j] = count;
            ++count;
        }
    }
}

void Matrix::show()
{
    for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            std::cout << _tab[i][j];
            std::cout << " ";
        }
        std::cout << "\n";        
    }
}

void Matrix::init()
{
    _tab = new int *[_x];
    for (int i = 0; i < _y; ++i)
    {
        _tab[i] = new int[_y];
    }
}


Matrix::Matrix()
{
    _tab = nullptr;
    _x = _y = 3;
    init();
}

Matrix::Matrix(int x, int y)
: _x(x), _y(y)
{
    _tab = nullptr;
    init();
}

Matrix::Matrix(const Matrix&)
{

}

Matrix::~Matrix()
{

}


Matrix& Matrix::operator = (const Matrix&)
{

}

Matrix& Matrix::operator = (int&)
{

}
