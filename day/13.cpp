#include <iostream>

enum Day{
    sunday,
    monday,
    tuseday,
    wednesday,
    thursday,
    friday,
    saturday,
};

int main(){
    int a = 22;
    int& a_ref = a;

    std::cout << "a: " << a << '\n';
    std::cout << "a_ref: " << a_ref << '\n';

    a_ref = 11;
    std::cout << "a: " << a << '\n';
    std::cout << "a_ref: " << a_ref << '\n';

    int c = 22, d = 33, e = 11;
    int &&ref = c+d+e;

    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "ref: " << ref << std::endl;

    ref += 66;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "ref: " << ref << std::endl;

    std::cout << "\nEnumeration demo : \n" <<
    sunday << '\n' <<
    monday << '\n' <<
    tuseday << '\n' <<
    friday << '\n' <<
    saturday << '\n' <<
    Day::friday << '\n';

    system("pause");
    return 0;
}