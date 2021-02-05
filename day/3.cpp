#include <iostream>
#include <string>

using namespace std;

int main(){
    string a("Threre is no spoon.");
    cout << a << endl;//"V"
    string *b = &a;
    cout << b << endl;//mem address of string a "V"
    string &c = a;
    cout << c << endl;//string a  "V"
    string *d = new string("D for the word");
    cout << d << endl;//mem address of string above

    
    system("pause");
    return 0;
}