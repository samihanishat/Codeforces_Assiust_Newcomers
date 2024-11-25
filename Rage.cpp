#include <iostream>
using namespace std;

int main()
{
    int n, year, month, day;
    cin >> n;
    year = n / 365;
    day = n % 365;
    month = day / 30;
    day = day % 30;
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days";
}