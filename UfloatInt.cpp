#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n, flt;
    cin >> n;
    int intg, temp;
    intg = n;
    temp = n * 10;
    temp = temp % 10;
    if (temp != 0)
    {
        cout << "float " << intg << " " << setprecision(3) << n - intg;
    }
    else if (temp == 0)
    {
        cout << "int " << intg;
    }
}