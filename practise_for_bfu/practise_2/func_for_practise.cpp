#include <iostream>
#include <fstream>
#include "func_for_practise.hpp"

void umnojenie(char a[1001],char b[1001])
{
    /*
    char a[1001] = "98054";
    char b[1001] = "5698";
     */
    int n;
    int sa = strlen(a);
    int sb = strlen(b);
    int razn;
    short int rez[sa + sb];
    if (sb > sa){
        std::swap(a, b);
        std::swap(sa, sb);
    }
    razn = sa - sb;
    n = sa;
    for (int t = 0;t <2*sa;t++)
    {
        rez[t] = 0;
    }
    int t = sa;
    for (int i = (sb-1) ;i>=0;i -= 1)
    {
        t -= 1;
        //std::cout << i << std::endl;
        for (int j = sa-1; j >=0;j -= 1)
        {
            int pr = (b[i] - 48) * (a[j] - 48);
            //std::cout << b[i] << " * " << a[j] << " = " <<pr << std::endl;
            rez[j + t + 1] += pr % 10;
            rez[j + t] += pr / 10;
            rez[j + t] += rez[j + t + 1] / 10;
            rez[j + t + 1] %= 10;
        }
    }
    bool start_chislo = 0;
    for (int i = 0;i<2*n;i++)
    {
        if (not(not(start_chislo) and rez[i] == 0))
        {
            start_chislo = 1;
            std::cout << rez[i];
        }
    }
    std::cout << "\n";
}

void slojenie(char a[1001],char b[1001])
{
    /*
    char a[1001] = "98054";
    char b[1001] = "5698";
    */
    short int rez[1001];
    int n;
    int sa = strlen(a);
    int sb = strlen(b);
    int razn;
    n = sa;
    razn = sa - sb;
    if (sb > sa){
        std::swap(a, b);
        n = sb;
        razn = sb - sa;
    }
    
    for (int t = 0;t <n+1;t++)
    {
        rez[t] = 0;
    }
    
    for (int i = n-1;i>=0;i -= 1)
    {
        short int sum = a[i] + b[i-razn] - 48*(bool(a[i]) +bool(b[i-razn]));
        //std::cout << a[i] << " + " << b[i-razn] << " = " << sum << std::endl;
        rez[i] = sum / 10;
        rez[i+1] += sum % 10;
        rez[i] += rez[i+1] / 10;
        rez[i+1] %= 10;
    }
    for (int i = 0;i<n+1;i++)
    {
        std::cout << rez[i];
    }
    std::cout << "\n";
}

