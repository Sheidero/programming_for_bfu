#include <iostream>
#include <fstream>
#include <filesystem>
#include "func_for_practise.hpp"

int main()
{
    
    std::cout<< std::filesystem::current_path() << std::endl;
    std::ifstream in("input.txt", std::ios::in);
    
    /*
    char a[1001] = "98054";
    char b[1001] = "5698";
    */
    
    if (in.is_open()) {
        std::cout << "success" << std::endl;
    }
    //char a[1001];
    //char b[1001];
    char a[1001];
    char b[1001];
    std::cout << a << " " << b << std::endl;
    in >> a >> b;
    std::cout << a << " " << b << std::endl;
    
    slojenie(a,b);
    umnojenie(a,b);
    return 0;
}
