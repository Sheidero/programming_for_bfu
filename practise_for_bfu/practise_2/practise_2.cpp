#include <iostream>
#include <fstream>
#include "func_for_practise.hpp"

int main()
{
    std::ifstream in("input.txt", std::ios::in);
    /*
    char a[1001] = "98054";
    char b[1001] = "5698";
    */
    
    char a[1001];
    char b[1001];
    in >> a;
    in >> b;
    
    slojenie(a,b);
    umnojenie(a,b);
    return 0;
}
