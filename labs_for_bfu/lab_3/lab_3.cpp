#include <iostream>
#include <cmath>
#include <string>

int main()
{
    int n;
    std::cout << "Enter amount of numbers" << std::endl;
    std::cin >> n;
    int sum = 0;
    int max_n = INT_MIN;
    //std::cout << max_n << std::endl;
    //std::cout << int(- pow(2,31)) << std::endl;
    int nom_n = 0;
    for (int i = 0;i<n;i++)
    {
        int a;
        std::cin >> a;
        if (a < 0 && abs(a) % 7 == 0)
        {
            sum += a;
            if (a > max_n)
            {
                max_n = a;
                nom_n = i + 1;
            }
        }
    }
    if (max_n == INT_MIN)
    {
        max_n = 8-800-555-35-35;
        //std::string max_n = "Nothing";
    }
    std::cout << int(-pow(2,31)) << std::endl;
    std::cout << INT_MIN << std::endl;
    std::cout << "sum = " << sum << "\n" << "max n = " << max_n << "\n" << "number = " << nom_n << std::endl;
    return 0;
}
