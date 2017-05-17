#include<iostream>
#include<vector>
#include<forward_list>

using namespace std;


void test(int x){
    if (x > 10)
    {
        return;
    }
    x += 2;
    cout << x << endl;
}


int main()
{
    vector<int> vi = {5,6,7};
    int *pb = &vi[0];

    cout << vi[0] << "\n";
    cout << *pb << "\n";


    return 0;
}
