#include"str.hpp"
#include<iostream>
#include<cstring>

void Str::init(char* str)
{
    _len = getLen(str)+1;
    _str = new char[_len];
    for (int i = 0; i < _len; ++i)
    {
        _str[i] = str[i];
    }       
}

void Str::clean()
{
    if (_str != nullptr)
    {
        for (int i = 0; i < _len; ++i)
        {
            _str[i] = NULL;
        }
        delete [] _str;
        _len = NULL;
    }
}

int Str::getLen(char* str) const
{
    int c = 0;
    while(str[c]!='\0') { c++; }
    return c;
}

Str::Str()
{
    _len = 1;
    _str = new char[_len];
    _str[0] = '\0';
}

Str::Str(char* str)
{
    this->init(str);
}

Str::Str(const Str &src)
{
    this->init(src._str);
}

Str::~Str()
{
    this->clean();
}

Str& Str::operator=(const Str& src)
{
    this->clean();
    this->init(src._str);   
}

void Str::operator=(char* str)
{
    this->clean();
    this->init(str);
}

char& Str::operator[](const int idx)
{
    return _str[idx];
}

char* operator+(const Str &s1, const Str &s2)
{    
    char* temp = new char[s1._len + s2._len - 1];

    for (int i = 0; i < s1._len - 1; ++i)
    {
        temp[i] = s1._str[i];
    }

    for (int i = 0; i < s2._len; ++i)
    {
        temp[i+s1._len-1] = s2._str[i];
    }

    return temp;
}

std::ostream& operator<<(std::ostream& out, const Str& src)
{
    return out << src._str;
}