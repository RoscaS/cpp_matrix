#pragma once
#include<ostream>

class Str {
public:
    Str();
    Str(char*);
    Str(const Str&);
    ~Str();

    int lenght() const;

    char& operator [] (const int);
    Str& operator = (const Str&);
    friend std::ostream& operator << (std::ostream &s, const Str &p);
    friend char* operator + (const Str&, const Str&) ;

private:
    char* ch_;
    int len;
};