#include <iostream>

int main(){
    int n, m;
    std::cin >> n >> m;
    int a[n][m];
    int pr = 1;
    int max = 0;
    int max_i = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> a[i][j];
            pr *=a[i][j];
        }
        if(pr > max){
            max = pr;
            max_i = i;
        }
        pr = 1;
    }
    for (int i = 0; i < m; i++){
        a[max_i][i] = max;
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cout << a[i][j] << " ";
            
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    return 0;
}
