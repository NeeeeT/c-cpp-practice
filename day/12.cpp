#include <iostream>

int main(){
    int i = 5;

    try
    {
        if(i > 0) throw 0;
        throw 2.0;
    }
    catch(const int e)
    {
        std::cerr << e << '\n';
    }
    catch(...){
        std::cout << "Something went wrong!" << '\n';
    }
    system("pause");
    return 0;
}