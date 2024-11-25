#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long N, M, sum, lastN, lastM;
    cin >> N >> M;
    lastM = M % 10;
    lastN = N % 10;
    sum = lastN + lastM;
    cout << sum;
}