
#include <iostream>
#include "header.h"
#include <cmath>
#include <clocale>
using namespace std;


void Arifmetika::slozenie(){

       cout << "������� ������ �����" << endl;
       cin >> a;
       cout << "������� ������ �����" << endl;
       cin >> b;
       result = a + b;
       cout << "����� ���� ����� �����  = " << result << endl;
}
 

void Arifmetika::vychitanie(){ 
 
       cout << "Введите первую цифру" << endl; 
       cin >> a; 
       cout << "Введите вторую цифру" << endl; 
       cin >> b; 
       result = a - b; 
       cout << "� азница двух чисел равна  = " << result << endl; 
}

void Arifmetika::ymnozhenie(){

       cout << "������� ������ �����" << endl;
       cin >> a;
       cout << "������� ������ �����" << endl;
       cin >> b;
       result = a * b;
       cout << "������������ ���� ����� �����  = " << result << endl;
}

