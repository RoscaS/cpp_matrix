#include<iostream>
using namespace std;

int** matrice()
{
    int **_tab = new int*[3];
    for (int i = 0; i < 3; ++i) {
        _tab[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j == i) { _tab[i][j] = 1; }
            else { _tab[i][j] = 0; }
        }        
    }
    return _tab;
}


int main()
{
    int **_tab = matrice();
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j)
        {
            cout << _tab[i][j] << "\n";
        }

    }
    
    return 0;
}
