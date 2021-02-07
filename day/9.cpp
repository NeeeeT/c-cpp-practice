#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    a = 3;
    b = 5;

    c = a + b++;
    cout << c << endl;
    cout << a << " " << b << endl;

    system("pause");
    return 0;
}