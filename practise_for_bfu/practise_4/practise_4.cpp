#include <iostream>

struct Chisla {
    unsigned short chislo_1: 2;
    unsigned short chislo_2: 2;
    unsigned short chislo_3: 2;
    unsigned short chislo_4: 2;
};

int main(){
    Chisla a;
    int b;
    std::cout << "You can put here four numbers(0-2)" << "\n" << "Enter them" << std::endl;
    std::cout << "1st" << std::endl; std::cin >> b;
    a.chislo_1 = b;
    
    std::cout << "2nd" << std::endl; std::cin >> b;
    a.chislo_2 = b;
    
    std::cout << "3rd" << std::endl; std::cin >> b;
    a.chislo_3 = b;
    
    std::cout << "4th" << std::endl; std::cin >> b;
    a.chislo_4 = b;
    
    std::cout << "1st = " << a.chislo_1 << std::endl;
    std::cout << "2nd = " << a.chislo_2 << std::endl;
    std::cout << "3rd = " << a.chislo_3 << std::endl;
    std::cout << "4th = " << a.chislo_4 << std::endl;
    return 0;
}
