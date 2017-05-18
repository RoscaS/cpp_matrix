# generic 2D matrix class (exercise 7.3)

Let's try to build a 2d matrix that is able to handle all sorts of types. The size of this bad guy is choosed by the user.

for example, he should be able to type in:

```c++
Matrix<float> m1(3, 4);
``` 

This instruction gonna create a Matrix that holds floats and is composed of 3 lignes and4 columns.

## todo:

- copy cstr
- **`OL operator =`** that allows operations like **`matrixInt1 = matrixInt2`**
- a second OL of **`operator =`** that'll allows to fill up a matrix with the same value.

- a show() method that'll show the type of the elements stored and the content of the matrix.

- like the generic linked list, it should be able to work with basic types and custom classes. 

- in particular it should work with the "chaine" type (kind of string type) made a couple of months ago and the Pixel type that is on of the first type that takes benefit of the inheritence that I've made in c++.


## Personal notes:
>1. Ok, so I think I gonna start to make a non generic type of matrix that works with int type, and I'll see from there.
#
>2. had some troubles with the basic logic of the building/filling/displaying/cleaning. I made a simple model and have done some tests to wrap my head around it and be clear:
![alt text](illustration/simple_version.gif)
 brilliant website: [http://pythontutor.com/]()
```c++
int main() {
    int _x = 5;
    int _y = 3;
    int **_tab;  
    // ---------- INIT ----------
    _tab = new int *[_x];

    for (int i = 0; i < _x; ++i) {
        _tab[i] = new int[_y];
    }  
    // ---------- FILL ----------
    for (int i = 0; i < _y; ++i) {
        for (int j = 0; j < _x; ++j) {
            _tab[j][i] = 0;
        }
    }
    // ---------- DISPLAY ----------
    for (int i = 0; i < _y; ++i) {
        for (int j = 0; j < _x; ++j) {
            cout << _tab[j][i] << " ";
        }
        cout << "\n";
    }
    // ---------- CLEAN ----------
    for (int i = 0; i < _x; ++i) {
        delete [] _tab[i];
    }

    delete [] _tab;

    _tab = nullptr;
    _x   = 0;
    _y   = 0;

    return 0;
}
```
#
>3. it's implemented in a class and all the required features are working fine.
```c++
#include<iostream>
#include"matrix.hpp"
using namespace std;

int main()
 {
    Matrix m;
    m = 5;
    cout << m << "\n";
    Matrix m2;
    m2 = 2;
    cout << m2 << "\n";
    m2 = m;
    cout << m2 << "\n";
    m = 9;
    Matrix m3{m};
    cout << m3 << "\n";
    Matrix m4{9,5};
    m4 = 6;
    cout << m4 << "\n";
    return 0;
}
```
output:

    5 5 5 
    5 5 5 
    5 5 5 

    2 2 2 
    2 2 2 
    2 2 2 

    5 5 5 
    5 5 5 
    5 5 5 

    9 9 9 
    9 9 9 
    9 9 9 

    6 6 6 6 6 6 6 6 6 
    6 6 6 6 6 6 6 6 6 
    6 6 6 6 6 6 6 6 6 
    6 6 6 6 6 6 6 6 6 
    6 6 6 6 6 6 6 6 6 

> Next step, make it genereic.
#

>4. It was pretty easy to get to a functionnal conversion. I didn't test it all the ways arround yet (I'm commuting atm) but it's compiling and working with int in a generic fashion. I still had the same issue as with the linked list (generic) with the destructor that I had to move in the .hpp file and also some issues with the OLed << that I had to replce with a display() method.