#include <iostream>

using namespace std;

int main(){
    int a = 192, b = 64;

    cout << ~a << endl;
    cout << (b << 2) << endl;
    cout << (b >> 2) << endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;


    system("pause");
    return 0;
}