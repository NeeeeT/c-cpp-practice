#include <iostream>

using namespace std;

class Demo{
public:
    Demo();
    Demo(int n1);
    Demo(int n1, int n2);
    void set_a(int n);
    void set_b(int n);
    int get_a();
    int get_b();
    int doSomething();
private:
    int a;
    int b;
};
Demo::Demo(){
    set_a(1);
    set_b(1);
}
Demo::Demo(int n1){
    set_a(n1);
    set_b(n1);
}
Demo::Demo(int n1, int n2){
    set_a(n1);
    set_b(n2);
}
int Demo::doSomething(){
    return get_a() + get_b();
}
void Demo::set_a(int n){
    a = n;
}
void Demo::set_b(int n){
    b = n;
}
int Demo::get_a(){
    return a;
}
int Demo::get_b(){
    return b;
}
int main(){
    Demo t1;
    Demo t2(5);
    Demo t3(10,15);

    cout << t1.doSomething() << endl;
    cout << t2.doSomething() << endl;
    cout << t3.doSomething() << endl;


    system("pause");
    return 0;
}