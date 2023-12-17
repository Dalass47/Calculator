#include <iostream> 
#include "header.h" 
#include <cmath> 
#include <clocale> 
using namespace std; 
 
 
void Arifmetika::vychitanie(){ 
 
       cout << "Введите первую цифру" << endl; 
       cin >> a; 
       cout << "Введите вторую цифру" << endl; 
       cin >> b; 
       result = a - b; 
       cout << "Разница двух чисел равна  = " << result << endl; 
}