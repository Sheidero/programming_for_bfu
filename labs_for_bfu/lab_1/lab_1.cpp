#include <iostream>

int main()
{
    int s;
    int h;
    std::cout << "Enter S and H and I will give you V" << std::endl;
    std::cin >> s;
    std::cin >> h;
    float res = float(h * s) / 3.;
    std::cout << "Your V = " << res << std::endl;
    return 0;
}

