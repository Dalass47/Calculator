#include <iostream>
#include <clocale>
#include "header.h"
//Test1
int main() {
    setlocale(LC_ALL, "");
    int choice;
    bool exitProgramm = false;
    Arifmetika obj;



    while (!exitProgramm){


        std::cout << "Выберите действие:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Умножение\n";
        std::cout << "4. Деление\n";
        std::cout << "9. Выход из программы\n";

        std::cout << "Введите номер действия: ";
        std::cin >> choice;
        system("cls");
        switch (choice) {
            case 1: //Сложение
                obj.slozenie();
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
            case 9:
                exitProgramm = true;
                break;
            default:
                std::cout << "Неверный выбор. Попробуйте еще раз.\n";
                continue;
        }
       }
    return 0;


}
