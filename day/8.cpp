#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    
    a = 99;
    b = 36;
    c = a + b;
    cout << "a + b = " << c << endl;
    
    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = a / b;
    cout << "a / b = " << c << endl;

    c = a % b;
    cout << "a - b = " << c << endl;

    char t = 'P';
    cout << t << " before /" << endl;
    t += 32;
    cout << t << " after /" << endl;
    system("pause");
    return 0;
}