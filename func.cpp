
#include <iostream>
#include "header.h"
#include <cmath>
#include <clocale>
using namespace std;


void Arifmetika::slozenie(){

       cout << "Введите первую цифру" << endl;
       cin >> a;
       cout << "Введите вторую цифру" << endl;
       cin >> b;
       result = a + b;
       cout << "Сумма двух чисел равна  = " << result << endl;
}
 

void Arifmetika::vychitanie(){ 
 
       cout << "Р’РІРµРґРёС‚Рµ РїРµСЂРІСѓСЋ С†РёС„СЂСѓ" << endl; 
       cin >> a; 
       cout << "Р’РІРµРґРёС‚Рµ РІС‚РѕСЂСѓСЋ С†РёС„СЂСѓ" << endl; 
       cin >> b; 
       result = a - b; 
       cout << "Р Р°Р·РЅРёС†Р° РґРІСѓС… С‡РёСЃРµР» СЂР°РІРЅР°  = " << result << endl; 
}

void Arifmetika::ymnozhenie(){

       cout << "Введите первую цифру" << endl;
       cin >> a;
       cout << "Введите вторую цифру" << endl;
       cin >> b;
       result = a * b;
       cout << "произведение двух чисел равна  = " << result << endl;
}

void Arifmetika::delenie(){

       cout << "Введите первую цифру" << endl;
       cin >> a;
       cout << "Введите вторую цифру" << endl;
       cin >> b;
       result = a / b;
       cout << "произведение двух чисел равна  = " << result << endl;
}
