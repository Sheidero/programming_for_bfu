#include <iostream>

struct chisla {
    unsigned short chislo_1: 2;
    unsigned short chislo_2: 2;
    unsigned short chislo_3: 2;
    unsigned short chislo_4: 2;
};

int main(){
    chisla a;
    int b;
    std::cout << "You can put here four numbers(0-2)" << "\n" << "Enter them" << std::endl;
    std::cout << "1st" << std::endl; std::cin >> b;
    a.chislo_1 = b;
    
    std::cout << "2st" << std::endl; std::cin >> b;
    a.chislo_2 = b;
    
    std::cout << "3st" << std::endl; std::cin >> b;
    a.chislo_3 = b;
    
    std::cout << "4st" << std::endl; std::cin >> b;
    
    a.chislo_4 = b;
    std::cout << a.chislo_1 << std::endl;
    return 0;
}
