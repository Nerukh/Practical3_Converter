/**
 * @file converter.cpp
 * @brief Реалізація модуля конвертації.
 */
#include "converter.h"
#include <stdexcept>

using namespace std;

double getRate(const string &currency)
{
    if (currency == "UAH") return 1.0;
    if (currency == "USD") return 41.5;
    if (currency == "EUR") return 45.0;
    if (currency == "PLN") return 10.4;
    throw invalid_argument("невідома валюта: " + currency);
}

double convert(double amount, const string &from, const string &to)
{
    double rateFrom = getRate(from);
    double rateTo = getRate(to);

    return amount * rateFrom / rateTo;
}