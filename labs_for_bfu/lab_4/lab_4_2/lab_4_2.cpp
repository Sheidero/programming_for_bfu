#include <iostream>

int main()
{
    const int N = 10000;
    int base[N];
    int sum_base[N];
    int pr_base[N];
    int n;
    int tmp;
    int sum;
    int pr;
    std::cout << "enter amount of numbers" << std::endl;
    std::cin >> n;
    std::cout << "enter numbers" << std::endl;
    for (int j = 0;j <n;j++)
    {
        
        int a;
        std::cin >> a;
        base[j] = a;
        sum = 0;
        pr = 1;
        tmp = abs(a);
        while (tmp > 0)
        {
            sum += tmp % 10;
            pr *= tmp % 10;
            tmp /= 10;
        }
        
        sum_base[j] = sum;
        pr_base[j] = pr;
    }
    //сортировка обменами
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
                if (sum_base[i] > sum_base[j] || ((sum_base[i] == sum_base[j]) && (pr_base[i] > pr_base[j])) || ((sum_base[i] == sum_base[j]) && (pr_base[i] == pr_base[j]) && (base[i] > base[j])))
                {
                    //std::swap(base[i], base[j]);
                    int tmp = base[i];
                    base[i] = base[j];
                    base[j] = tmp;
                    //
                    int tm = sum_base[i];
                    sum_base[i] = sum_base[j];
                    sum_base[j] = tm;
                    //
                    int tmr = pr_base[i];
                    pr_base[i] = pr_base[j];
                    pr_base[j] = tmr;
                }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << base[i] << " ";
    std::cout << "\n";
   // example
  //  13 22 212 110 101 2 709 88
}
