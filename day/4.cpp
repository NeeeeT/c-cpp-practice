#include <iostream>

using namespace std;

class Demo{
    public :
        int a;
        int b;
        int doSomething();
};

int Demo::doSomething(){
    return a + b;
}

int main(){
    Demo t;
    t.a = 11;
    t.b = 22;
    cout << t.doSomething() << endl;

    system("pause");
    return 0;
}