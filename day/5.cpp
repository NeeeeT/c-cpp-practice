#include <iostream>
#include <string>

using namespace std;

class Demo
{
public:
    void set_a(int n);
    void set_b(int n);
    int get_a();
    int get_b();
    int doSomething();

    //declare private members
private:
    int a;
    int b;
};

void Demo::set_a(int n){
    a = n;
};
void Demo::set_b(int n){
    b = n;
};
int Demo::get_a(){
    return a;
}
int Demo::get_b(){
    return b;
}
int Demo::doSomething(){
    return get_a() + get_b();
}
int main()
{
    Demo t;
    t.set_a(333);
    t.set_b(555);
    cout << t.doSomething() << endl;
    system("pause");
    return 0;
}