#include <iostream>

int main()
{
    unsigned int p;
    std::cin >> p;
    unsigned char* a = (unsigned char*)&p;
    for (int i = 0; i < sizeof(p); i++) {
        std::cout << (int)a[i];
    }
    return 0;
}
