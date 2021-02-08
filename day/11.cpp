#include <iostream>

struct BadValue : public std::exception {}; 

double divide(double a, double b){
    if(b == 0){
        throw BadValue();
    }
    return a / b;
}

int main(){
    try
    {
        std::cout << divide(20, 1) << std::endl;
        std::cout << divide(20, 2) << std::endl;
        std::cout << divide(20, 3) << std::endl;
        std::cout << divide(20, 4) << std::endl;
        std::cout << divide(20, 5) << std::endl;
        std::cout << divide(20, 0) << std::endl;
    }
    catch(BadValue e)
    {
        std::cerr << "Something went wrong!" << '\n';
    }
    system("pause");
    return 0;
}