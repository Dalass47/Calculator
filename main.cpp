#include <iostream>
#include <clocale>
//Test1
int main() {
    setlocale(LC_ALL, "");
    int choice;

    std::cout << "Выберите действие:\n";
    std::cout << "1. Сложение\n";
    std::cout << "2. Вычитание\n";
    std::cout << "3. Умножение\n";
    std::cout << "4. Деление\n";

    std::cout << "Введите номер действия: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Еще в разработке)\n";
            break;
        case 2:
            std::cout << "Еще в разработке)\n";
            break;
        case 3:
            std::cout << "Еще в разработке)\n";
            break;
        case 4:
            std::cout << "Еще в разработке)\n";
            break;
        default:
            std::cout << "Неверный выбор. Попробуйте еще раз.\n";
            break;
    }

    return 0;
}
