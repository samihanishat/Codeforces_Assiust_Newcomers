#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double PI =  3.141592653;
    double R,Area;
    cin >> R;
    Area = PI * R * R;
    cout << fixed << setprecision(9);
    cout << Area;
    // printf("%0.9lf",Area);
}