#include <iostream>
#include <vector>

// define - оператор присваивания
#define Print(a) std::cout << a << std::endl

int main() {
    // создать переменную типа вектор
    // память выделяется в стеке, но vector хранит в хипе
    std::vector<int> vector;
    
    // push_back добавляет элемент в конец
    for (int i = 0; i < 10; i++) {
        vector.push_back(i);
    }
    // erase удаляет диапазон элементов
    vector.erase(vector.begin(), vector.begin() + 2);
    
    // insert вставляет по индексу элемент на определённую позицию
    // следующие за ним элементы сдвигаются на 1 позицию вперёд
    vector.insert(vector.begin() + 3, 10);
    
    // emplace_back добавляет объект в конец,
    // но в отличие от push_back, создаёт объект именно в конце вектора, избегая копирования
    vector.emplace_back(20);
    
    // resize изменяет количество элементов
    vector.resize(15);
    
    // reserve изменяет вместимость вектора
    vector.reserve(20);
    
    // shrink_to_fit вместимость вектора изменяется под количество его элементов
    vector.shrink_to_fit();
    
    // capacity возвращает вместимость вектора
    Print(vector.capacity());
    
    
    for (int i = 0; i < vector.capacity(); i++) {
        // с помощью [] получаем элемент вектора по индексу i
        Print(vector[i]);
        // также  с помощью [], когда получаем доступ к элементу по индексу i, его можно изменять
        vector[i] += 10;
    }
    
    // clear удаляет все элементы вектора
    vector.clear();
    
    
    return 0;
}
