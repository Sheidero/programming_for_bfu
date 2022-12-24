#include <iostream>
#include <cmath>

int main()
{
    bool simple = false;
    const int N = 10000;
    int base[N];
    int n;
    int all = true;
    std::cout << "enter amount of numbers" << std::endl;
    std::cin >> n;
    std::cout << "enter numbers" << std::endl;
    for (int j = 0;j <n;j++)
    {
        int a;
        std::cin >> a;
        simple = true;
        //проверка на непростоту
        for (int i = 2;i <= sqrt(a);i++)
        {
            if (a % i == 0)
            {
                simple = false;
                break;
            }
        }
        if (simple)
            all = false;
        base[j] = a;
        
               
    }
    
    if (all)
        //сортировка обменами
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                    if (base[i] > base[j])
                    {
                        //std::swap(base[i], base[j]);
                        int tmp = base[i];
                        base[i] = base[j];
                        base[j] = tmp;
                    }
            }
            for (int i = 0; i < n; i++)
                std::cout << base[i] << " ";
            std::cout << "\n";
        }
        //for (int i = 0;i < n;i++)
    if (!all)
        std::cout << "some prime"<< std::endl;
}
