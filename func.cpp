
#include <iostream>
#include "header.h"
#include <cmath>
#include <clocale>
using namespace std;


void Arifmetika::slozenie(){

       cout << "Ââåäèòå ïåðâóþ öèôðó" << endl;
       cin >> a;
       cout << "Ââåäèòå âòîðóþ öèôðó" << endl;
       cin >> b;
       result = a + b;
       cout << "Ñóììà äâóõ ÷èñåë ðàâíà  = " << result << endl;
}
 

void Arifmetika::vychitanie(){ 
 
       cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¿ÐµÑ€Ð²ÑƒÑŽ Ñ†Ð¸Ñ„Ñ€Ñƒ" << endl; 
       cin >> a; 
       cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð²Ñ‚Ð¾Ñ€ÑƒÑŽ Ñ†Ð¸Ñ„Ñ€Ñƒ" << endl; 
       cin >> b; 
       result = a - b; 
       cout << "Ð Ð°Ð·Ð½Ð¸Ñ†Ð° Ð´Ð²ÑƒÑ… Ñ‡Ð¸ÑÐµÐ» Ñ€Ð°Ð²Ð½Ð°  = " << result << endl; 
}

void Arifmetika::ymnozhenie(){

       cout << "Ââåäèòå ïåðâóþ öèôðó" << endl;
       cin >> a;
       cout << "Ââåäèòå âòîðóþ öèôðó" << endl;
       cin >> b;
       result = a * b;
       cout << "ïðîèçâåäåíèå äâóõ ÷èñåë ðàâíà  = " << result << endl;
}

