#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, d, la, lb, lc, ld, last2digit;
    cin >> a >> b >> c >> d;
    la = a % 100;
    lb = b % 100;
    lc = c % 100;
    ld = d % 100;
    if (a < 1000 && b < 1000 && c < 1000 && d < 1000)
    {
        last2digit = (a * b * c * d) % 100;
    }
    else
    {
        last2digit = (la * lb * lc * ld) % 100;
    }
    cout <<setw(2)<< setfill('0')<< last2digit;
}