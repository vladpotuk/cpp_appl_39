#include <iostream>
#include<Windows.h>
//���������� ������� ����� ������� � ������� ������. ���������� ������ ���� �� ����������� � �����.
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

    std::cout << "������ �����: ";
    std::cin.getline(inputString, MAX_LENGTH);

    char target;
    std::cout << "������ ������� ������: ";
    std::cin >> target;

    int occurrences = countOccurrences(inputString, target);

    std::cout << "������ '" << target << "' ����������� " << occurrences << " ���� � �����." << std::endl;

    return 0;
}
