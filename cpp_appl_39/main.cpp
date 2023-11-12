#include <iostream>
#include<Windows.h>
//Користувач вводить рядок символів і шуканий символ. Порахувати скільки разів він зустрічається в рядку.
int countOccurrences(const char* str, char target) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "Введіть рядок: ";
    std::cin.getline(inputString, MAX_LENGTH);

    char target;
    std::cout << "Введіть шуканий символ: ";
    std::cin >> target;

    int occurrences = countOccurrences(inputString, target);

    std::cout << "Символ '" << target << "' зустрічається " << occurrences << " разів у рядку." << std::endl;

    return 0;
}
