#include "input.h"
#include <iostream>
#include <string>
using namespace std;

void readInput(double &amount, string &from, string &to){
    cout << "Доступні валюти: UAH, USD, EUR, PLN\n";
    cout << "Введіть суму: ";
    cin >> amount;
    cout << "З якої валюти: ";
    cin >> from;
    cout << "В яку валюту: ";
    cin >> to;

} 