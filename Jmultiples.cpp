#include<iostream>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if(A % B ==0){
        cout << "Multiples";
    }
    else if(B % A ==0){
        cout << "Multiples";
    }
    else{
        cout << "No Multiples";
    }
}