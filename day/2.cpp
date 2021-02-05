#include <iostream>
#include <string>

using namespace std;

int main(){
    int n = 11;
    cout << n << endl;
    int *np = &n;
    cout << np << endl;

    int t = *np;
    cout << t << endl;
    
    system("pause");
    return 0;
}