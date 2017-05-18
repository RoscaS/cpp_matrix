#pragma once
#include<ostream>
#include<cstring>

class Str {
public:
    Str();
    Str(char*);
    Str(const Str&);
    ~Str();

    Str& operator=(const Str&);
    void operator=(char*);
    char& operator[](const int);

    friend char* operator+
    (const Str&, const Str&);

    friend std::ostream& operator<<
    (std::ostream&, const Str&);

private:
    int getLen(char*) const;
    void clean();
    void init(char*);

    char* _str;
    int   _len;
};