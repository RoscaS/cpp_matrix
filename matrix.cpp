#include<iostream>
#include"matrix.hpp"


void Matrix::init()
{
    _tab = new int*[_x];
    for (int i = 0; i < _x; ++i)
    {
        _tab[i] = new int[_y];
    }
}


void Matrix::copy(const Matrix &src)
{
    this->_x = src._x;
    this->_y = src._y;
    this->init();
    for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            this->_tab[j][i] = src._tab[j][i];
        }
    }

}


void Matrix::clean()
{
    if (_tab != nullptr)
    {
        for (int i = 0; i < _x; ++i)
        {
            delete [] _tab[i];
        }

        delete [] _tab;
        _tab = nullptr;
        _x = 0;
        _y = 0;
    }
}


Matrix::Matrix()
{
    _x = 3;
    _y = 3;
    _tab = nullptr;
    init();
}


Matrix::Matrix(int x, int y)
    : _x(x), _y(y)
{
    _tab = nullptr;
    init();
}


Matrix::~Matrix()
{
    clean();
}


Matrix::Matrix(const Matrix &src)
{
    if (this != &src)
    {  
        this->copy(src);
    }
}


Matrix& Matrix::operator = (const Matrix &src)
{
    if (this != &src)
    {
        this->clean();
        this->copy(src);
        return *this;
    }
}


void Matrix::operator = (const int n)
{
     for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            _tab[j][i] = n;
        }
    }      
}


std::ostream& operator<<(std::ostream &out, const Matrix &src)
{
    for (int i = 0; i < src._y; ++i)
    {
        for (int j = 0; j < src._x; ++j)
        {
            out << src._tab[j][i] << " ";
        }
        out << "\n";        
    }
    return out;
}
