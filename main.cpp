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


        std::cout << "�������� ��������:\n";
        std::cout << "1. ��������\n";
        std::cout << "2. ���������\n";
        std::cout << "3. ���������\n";
        std::cout << "4. �������\n";
        std::cout << "9. ����� �� ���������\n";

        std::cout << "������� ����� ��������: ";
        std::cin >> choice;
        system("cls");
        switch (choice) {
            case 1: //��������
                obj.slozenie();
                break;
            case 2:
                std::cout << "��� � ����������)\n";
                break;
            case 3:
                std::cout << "��� � ����������)\n";
                break;
            case 4:
                std::cout << "��� � ����������)\n";
                break;
            case 9:
                exitProgramm = true;
                break;
            default:
                std::cout << "�������� �����. ���������� ��� ���.\n";
                continue;
        }
       }
    return 0;


}
