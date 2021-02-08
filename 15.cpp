#include <iostream>

int main(){
    int a[8];
    a[0] = 8;
    a[1] = 7;
    a[2] = 6;
    a[3] = 5;
    a[4] = 4;
    a[5] = 3;
    a[6] = 2;
    a[7] = 1;

    std::cout << "a[0]:" << a[0] << '\n';
    std::cout << "a[1]:" << a[1] << '\n';
    std::cout << "a[2]:" << a[2] << '\n';
    std::cout << "a[3]:" << a[3] << '\n';
    std::cout << "a[4]:" << a[4] << '\n';
    std::cout << "a[5]:" << a[5] << '\n';
    std::cout << "a[6]:" << a[6] << '\n';

    system("pause");
    return 0;
}