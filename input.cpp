/**
 * @file input.cpp
 * @brief Реалізація модуля введення.
 */
#include "input.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>

using namespace std;

// Зчитує суму, доки користувач не введе додатне число.
static double readAmount()
{
    string line();
    while (true){
        cout << "Введіть суму:";
        cin >> line;

        try{
            size_t pos = 0;
            double value = stod(line, &pos);

            if(pos != line.size())
                throw invalid_argument("зайві символи");
            if(value <= 0)
                throw invalid_argument("не додане число");

            return value;
        }
        catch(const exception &)
        {
            cout << "Помилка: сума має бути додатним числом. Спробуйте ще раз.\n";
        }
    }
}

static string readCurrency(const string &prompt)
{
    string code;
    cout << prompt;
    cin >> code;

    for (char &c : code)
        c = toupper(static_cast<unsigned char>(c));
    return code;
}

void readInput(double &amount, string &from, string &to){
    cout << "Доступні валюти: UAH, USD, EUR, PLN\n";
    cout << "Введіть суму: ";
    cin >> amount;
    cout << "З якої валюти: ";
    cin >> from;
    cout << "В яку валюту: ";
    cin >> to;

} 