#include <iostream>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>

bool isSogl(char b1, char b2) {
    bool flag1 = false;
    bool flag2 = false;
    
    if (b1 == 'q' || b1 == 'w' || b1 == 'r' || b1 == 't' || b1 == 'p' || b1 == 's' || b1 == 'd' || b1 == 'f' || b1 == 'g' || b1 == 'h' || b1 == 'j' || b1 == 'k' || b1 == 'l' || b1 == 'z' || b1 == 'x' || b1 == 'c' || b1 == 'v' || b1 == 'b' || b1 == 'n' || b1 == 'm'){
        flag1 = true;
    }
    if (b2 == 'q' || b2 == 'w' || b2 == 'r' || b2 == 't' || b2 == 'p' || b2 == 's' || b2 == 'd' || b2 == 'f' || b2 == 'g' || b2 == 'h' || b2 == 'j' || b2 == 'k' || b2 == 'l' || b2 == 'z' || b2 == 'x' || b2 == 'c' || b2 == 'v' || b2 == 'b' || b2 == 'n' || b2 == 'm'){
        flag2 = true;
    }
    return flag1 && flag2;
}

void swap(std::string* a, std::string*b, short int* a2, short int*b2)
{
    std::string temp = *a;
    *a = *b;
    *b = temp;
    short int temp2 = *a2;
    *a2 = *b2;
    *b2 = temp2;
}

void ChangeSort(std::string words[], short int pairs[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
                if (pairs[j+1] > pairs[j])
                {
                    swap(&words[j], &words[j + 1],&pairs[j], &pairs[j + 1]);
                }
        }
    }
}

short int Amountofpairs(std::string word) {
    int kolvo = 0;
    for (int i = 0; i < word.size() -1; i++) {
        if (isSogl(std::tolower(word[i]),std::tolower(word[i+1]))) {
            kolvo++;
        }
    }
    return kolvo;
}

bool WordContain(std::string itog[], int n, std::string word) {
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (itog[i] == word) {
            flag = true;
        }
    }
    return flag;
}

int main()
{
    char a[5] = "Я";
    int n;
    std::cin >> n;
    std::string words[10000];
    int count = 0;
    setlocale(LC_ALL, "Russian");
    short int pairsInWords[10000];
    std::ifstream in("input.txt", std::ios::in);
    std::ofstream out("output.txt", std::ios::out);
    while (!in.eof()) {
        std::string c;
        in >> c;
        short int check = Amountofpairs(c);
        if  (check && !WordContain(words, count, c)) {
            words[count] = c;
            pairsInWords[count] = check;
            count++;
        }
    }

    ChangeSort(words, pairsInWords, count);
    for (int i = 0; i < count; i++) {
        out << words[i] << std::endl;
    }
    return 0;
}
