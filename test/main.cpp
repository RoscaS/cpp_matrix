#include<iostream>
using namespace std;

int main()
{
    int _x = 5;
    int _y = 3;
    int **_tab;  
    // ---------- INIT ----------
    _tab = new int *[_x];

    for (int i = 0; i < _x; ++i)
    {
        _tab[i] = new int[_y];
    }  
    // ---------- FILL ----------
    for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            _tab[j][i] = 0;
        }
    }
    // ---------- DISPLAY ----------
    for (int i = 0; i < _y; ++i)
    {
        for (int j = 0; j < _x; ++j)
        {
            cout << _tab[j][i] << " ";
        }
        cout << "\n";
    }
    // ---------- CLEAN ----------
    for (int i = 0; i < _x; ++i)
    {
        delete [] _tab[i];
    }

    delete [] _tab;

    _tab = nullptr;
    _x   = 0;
    _y   = 0;

    return 0;
}
