#include <iostream>
using namespace std;

int main()
{
    char X, y;
    cin >> X;
    if (X >= 'a' && X <= 'z')
    {
        y = 'A' + (X - 'a');
        cout << y;
    }
    else if (X >= 'A' && X <= 'Z')
    {
        y = 'a' + (X - 'A');
        cout << y;
    }
}