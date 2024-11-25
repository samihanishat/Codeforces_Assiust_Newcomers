#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int Floor,Ceil,roun;
    double divi, A,B;
    cin >> A >> B;
    divi = A/B;
    Floor = A / B ;
    // ceil = floor + 1;
    Ceil = ceil(divi);
    roun = round(divi);
    cout << "floor " << A << " / " << B << " = " << Floor << endl; 
    cout << "ceil " << A << " / " << B << " = " << Ceil << endl; 
    cout << "round " << A << " / " << B << " = " << roun; 
}