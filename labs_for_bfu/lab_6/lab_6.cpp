#include <iostream>
#include <fstream>
#include "funcs.hpp"


int main()
{
    std::cout<< std::filesystem::current_path() << std::endl;
    int n = 10;
    std::cin >> n;
    int** matriz = new int*[100];
    for(int i=0; i<100; i++){
        matriz[i] = new int[100];
    }
    int* prost = new int[100]; //количество простых чисел в каждой строке
    for (int i = 0;i < n;i ++)
    {
        prost[i] = 0;
    }

    if(rd::reading(n, matriz, prost))
    {
        rd::think(n, matriz, prost);
    }
    rd::write(n, matriz);
    delete[] prost;
    for(int i=0; i<100; i++){
        delete[] matriz[i];
    }
    delete[] matriz;
    return 0;
}
