#include <iostream>

int main(){
    char str[100];
    std::cout << "enter str" << std::endl;
    std::cin >> str;
    std::cout << "Give me this letter" << std::endl;
    char letter[1];
    int amount = strlen(str);
    std::cin >> letter;
    int position = -3;
    for (int i = 0;i < amount;i++)
    {
        if (str[i] == letter[0])
        {
            position = i;
            break;
        }
    }
    if (position < 0)
    {
        std::cout << "There is no your letter" << std::endl;
    }
    else{
        std::cout << "There is position of your letter" << "\n" << position << std::endl;
    }
    return 0;
}
