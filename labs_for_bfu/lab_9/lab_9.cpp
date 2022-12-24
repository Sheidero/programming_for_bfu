#include <iostream>

// класс, который содержит информацию о кубе
class Cube {
private:
    unsigned int m_lengthSide; // длина стороны
public:
    // принимает длину стороны
    Cube(unsigned int lengthSide) :
        m_lengthSide(lengthSide) {}
    
    // возвращает длину стороны
    unsigned int getSide() {
        return m_lengthSide;
    }
    
    // возвращает объём
    unsigned int getVolume() {
        return m_lengthSide * m_lengthSide * m_lengthSide;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Cube cube(12);
    
    std::cout << "Куб" << std::endl;
    std::cout << " __ " << "\n" << "|  |" << "\n" << "|__|" << "\n"<< "" << std::endl;
    std::cout << "Длина стороны = " << cube.getSide() << std::endl;
    std::cout << "Объём = " << cube.getVolume() << std::endl;

}
