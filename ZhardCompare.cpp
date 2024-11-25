#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a, b, c, d, ab, cd;
    cin >> a >> b >> c >> d;
    ab = b*log(a);
    cd = d*log(c);
    if (b == d && a > c)
    {
        cout << "YES";
    }
    else if (ab > cd)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}