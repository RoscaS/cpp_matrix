// #include<iostream>
// #include"matrix.hpp"

template<typename T>
void Matrix<T>::init()
{
    _tab = new T*[_x];
    for (int i = 0; i < _x; ++i)
    {
        _tab[i] = new T[_y];
    }
}

template<typename T>
void Matrix<T>::copy(const Matrix<T> &src)
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

template<typename T>
void Matrix<T>::clean()
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

template<typename T>
Matrix<T>::Matrix()
{
    _x = 3;
    _y = 3;
    _tab = nullptr;
    init();
}

template<typename T>
Matrix<T>::Matrix(int x, int y)
    : _x(x), _y(y)
{
    _tab = nullptr;
    init();
}

template<typename T>
Matrix<T>::Matrix(const Matrix<T> &src)
{
    if (this != &src)
    {  
        this->copy(src);
    }
}

template<typename T>
Matrix<T>& Matrix<T>::operator = (const Matrix<T> &src)
{
    if (this != &src)
    {
        this->clean();
        this->copy(src);
        return *this;
    }
}

template<typename T>
void Matrix<T>::operator = (const T val)
{
     for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            _tab[j][i] = val;
        }
    }      
}

// template<typename T>
// std::ostream& operator<<(std::ostream &out, const Matrix<T> &src)
// {
//     for (int i = 0; i < src._y; ++i)
//     {
//         for (int j = 0; j < src._x; ++j)
//         {
//             out << src._tab[j][i] << " ";
//         }
//         out << "\n";        
//     }
//     return out;
// }

template<typename T>
void Matrix<T>::display()
{
    for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            std::cout << _tab[j][i] << " ";
        }
        std::cout << "\n";        
    }
}