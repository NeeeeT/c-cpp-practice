#include <iostream>

enum class Color: char{
    RED = 'r',
    GREEN = 'g',
    BLUE = 'b',
};
int main(){
    Color r, g, b;
    r = Color::RED;
    g = Color::GREEN;
    b = Color::BLUE;

    std::cout << static_cast<char>(r) << std::endl;
    std::cout << static_cast<char>(g) << '\n';
    std::cout << static_cast<char>(b) << '\n';
    // std::cout << g << std::endl;
    // std::cout << b << std::endl;


    system("pause");
    return 0;
}