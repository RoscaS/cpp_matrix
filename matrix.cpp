#include"matrix.hpp"

void Matrix::init()
{
    
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

void Matrix::show()
{

}

Matrix& Matrix::operator = (const Matrix&)
{

}

Matrix& Matrix::operator = (int&)
{

}
