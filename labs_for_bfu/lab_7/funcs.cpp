#include "funcs.hpp"
#include <fstream>
#include <iostream>

namespace rd{

bool isSimple(int chislo)
{
    bool flag = true; //проверка на простоту
    for (int d = 2; d < chislo / 2; d++)
    {
        if (chislo % d == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
bool reading(int n, int** matriz,int* prost)
{
    int chislo;
    
    std::ifstream in("input.txt", std::ios::in); // имя файла и спецификатор (для чтения)
    int maxchislo = 0;
    bool right = false;
    for (int i = 0;i < n; i++)
    {
        for (int j = 0;j < n;j++)
        {
            in >> chislo;
            matriz[i][j] = chislo;
            bool flag = isSimple(chislo);
            if (flag)
            {
                prost[i] += 1;
            }
            if (chislo >= maxchislo)
            {
                if (chislo == maxchislo)
                {
                    right = true;
                }
                else
                {
                    right = false;
                }
                maxchislo = chislo;
            }
        }
            
    }
    return right;
}

void think(int n, int** matriz, int* prost)
{
    for (int i=0;i<n-1;i++)
    {
        
        for (int j=i+1;j<n;j++)
        {
                if (prost[i] < prost[j])
                {
                    for (int c = 0;c < n;c ++)
                    {
                        std::swap(matriz[i][c],matriz[j][c]);
                    }
                    std::swap(prost[i],prost[j]);
                }
        }
    }
}

void write(int n, int** matriz)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
}

}
